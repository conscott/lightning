#!/usr/bin/env python3
import os
import pyinotify
import subprocess
import sys


# Pull the lightningd args for restart
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
    subprocess.Popen(lightningd_cmd);


# Event handler class
class ModHandler(pyinotify.ProcessEvent):
    def process_IN_CLOSE_WRITE(self, event):
        print("CLOSE_WRITE event:", event.pathname)
        restart_lightningd()

    def process_IN_DELETE(self, event):
        print("DELETE event:", event.pathname)
        restart_lightningd()

lightningd_cmd = sys.argv[1:]
print("Starting...\n%s" % ' '.join(lightningd_cmd))
subprocess.Popen(lightningd_cmd);

# TODO - read the .lightning/config for plugin-dirs or the command line args
PLUGIN_DIR="/home/conor/c-lightning-plugins/"
print("Setting watch for files in %s" % PLUGIN_DIR)

wm = pyinotify.WatchManager()
wdd = wm.add_watch(PLUGIN_DIR, pyinotify.ALL_EVENTS)
handler = ModHandler()
notifier = pyinotify.Notifier(wm, handler)
notifier.loop()
