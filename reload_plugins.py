#!/usr/bin/env python3
import os
import pyinotify
import subprocess
import sys


# Return a list of plugin dirs/files to watch
def get_plugins(argv):
    to_watch = set()

    # Scan command line args for plugins
    args = [arg.split('=') for arg in argv]
    idx = 0
    while idx < len(args):
        arg = args[idx]
        if arg[0] in ('--plugin', '--plugin-dir',):
            # Used --plugin=<path>
            if len(arg) > 1:
                to_watch.add(arg[1])
            # Used --plugin <path>
            else:
                to_watch.add(args[idx+1][0])
                idx += 1
        idx += 1

    # Scan config file
    home = os.getenv("HOME")
    if home:
        config_file = os.path.join(home, ".lightning/config")
        with open(config_file) as f:
            content = f.readlines()
        # Sick one liner to add plugin entries from config to watch set
        [to_watch.add(x.split('=')[-1].strip()) for x in content if 'plugin' in x]

    return list(to_watch)


def restart_lightningd():
    try:
        pid = subprocess.check_output("pidof lightningd", shell=True).decode("utf-8").rstrip()
    except subprocess.CalledProcessError:
        print("No lightningd instance found...")
        return None

    # Get commands lightningd was started with
    # cmd = subprocess.check_output("ps -p %s -o args --no-headers" % pid, shell=True).decode("utf-8").rstrip()

    print("Detected plugin change, killing lightningd [%s]..." % pid)
    subprocess.call("kill %s" % pid, shell=True)

    print("Restarting lightningd with args:\n\n%s" % lightningd_cmd)
    subprocess.Popen(lightningd_cmd)


# Event handler class
class ModHandler(pyinotify.ProcessEvent):
    def process_IN_CLOSE_WRITE(self, event):
        print("CLOSE_WRITE event:", event.pathname)
        restart_lightningd()

    def process_IN_DELETE(self, event):
        print("DELETE event:", event.pathname)
        restart_lightningd()

lightningd_cmd = sys.argv[1:]
plugin_dirs = get_plugins(sys.argv[1:])

wm = pyinotify.WatchManager()
for plugin in plugin_dirs:
    print("Watching %s" % plugin)
    wdd = wm.add_watch(plugin, pyinotify.ALL_EVENTS)

handler = ModHandler()
notifier = pyinotify.Notifier(wm, handler)
notifier.loop()

print("Starting...\n%s" % ' '.join(lightningd_cmd))
subprocess.Popen(lightningd_cmd)
