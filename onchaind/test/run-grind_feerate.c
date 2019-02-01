#include <ccan/array_size/array_size.h>
#include <ccan/time/time.h>
#include <common/status.h>

#undef status_trace
#define status_trace(...)

#define main unused_main
int main(int argc, char *argv[]);
#include "../onchaind.c"
#undef main

/* AUTOGENERATED MOCKS START */
/* Generated stub for commit_number_obscurer */
u64 commit_number_obscurer(const struct pubkey *opener_payment_basepoint UNNEEDED,
			   const struct pubkey *accepter_payment_basepoint UNNEEDED)
{ fprintf(stderr, "commit_number_obscurer called!\n"); abort(); }
/* Generated stub for daemon_shutdown */
void daemon_shutdown(void)
{ fprintf(stderr, "daemon_shutdown called!\n"); abort(); }
/* Generated stub for derive_keyset */
bool derive_keyset(const struct pubkey *per_commitment_point UNNEEDED,
		   const struct basepoints *self UNNEEDED,
		   const struct basepoints *other UNNEEDED,
		   struct keyset *keyset UNNEEDED)
{ fprintf(stderr, "derive_keyset called!\n"); abort(); }
/* Generated stub for fromwire_hsm_get_per_commitment_point_reply */
bool fromwire_hsm_get_per_commitment_point_reply(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct pubkey *per_commitment_point UNNEEDED, struct secret **old_commitment_secret UNNEEDED)
{ fprintf(stderr, "fromwire_hsm_get_per_commitment_point_reply called!\n"); abort(); }
/* Generated stub for fromwire_hsm_sign_tx_reply */
bool fromwire_hsm_sign_tx_reply(const void *p UNNEEDED, struct bitcoin_signature *sig UNNEEDED)
{ fprintf(stderr, "fromwire_hsm_sign_tx_reply called!\n"); abort(); }
/* Generated stub for fromwire_onchain_depth */
bool fromwire_onchain_depth(const void *p UNNEEDED, struct bitcoin_txid *txid UNNEEDED, u32 *depth UNNEEDED)
{ fprintf(stderr, "fromwire_onchain_depth called!\n"); abort(); }
/* Generated stub for fromwire_onchain_htlc */
bool fromwire_onchain_htlc(const void *p UNNEEDED, struct htlc_stub *htlc UNNEEDED, bool *tell_if_missing UNNEEDED, bool *tell_immediately UNNEEDED)
{ fprintf(stderr, "fromwire_onchain_htlc called!\n"); abort(); }
/* Generated stub for fromwire_onchain_init */
bool fromwire_onchain_init(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct shachain *shachain UNNEEDED, u64 *funding_amount_satoshi UNNEEDED, struct pubkey *old_remote_per_commitment_point UNNEEDED, struct pubkey *remote_per_commitment_point UNNEEDED, u32 *local_to_self_delay UNNEEDED, u32 *remote_to_self_delay UNNEEDED, u32 *feerate_per_kw UNNEEDED, u64 *local_dust_limit_satoshi UNNEEDED, struct bitcoin_txid *our_broadcast_txid UNNEEDED, u8 **local_scriptpubkey UNNEEDED, u8 **remote_scriptpubkey UNNEEDED, struct pubkey *ourwallet_pubkey UNNEEDED, enum side *funder UNNEEDED, struct basepoints *local_basepoints UNNEEDED, struct basepoints *remote_basepoints UNNEEDED, struct bitcoin_tx **tx UNNEEDED, u32 *tx_blockheight UNNEEDED, u32 *reasonable_depth UNNEEDED, secp256k1_ecdsa_signature **htlc_signature UNNEEDED, u64 *num_htlcs UNNEEDED, u32 *min_possible_feerate UNNEEDED, u32 *max_possible_feerate UNNEEDED, struct pubkey **possible_remote_per_commit_point UNNEEDED)
{ fprintf(stderr, "fromwire_onchain_init called!\n"); abort(); }
/* Generated stub for fromwire_onchain_known_preimage */
bool fromwire_onchain_known_preimage(const void *p UNNEEDED, struct preimage *preimage UNNEEDED)
{ fprintf(stderr, "fromwire_onchain_known_preimage called!\n"); abort(); }
/* Generated stub for fromwire_onchain_spent */
bool fromwire_onchain_spent(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct bitcoin_tx **tx UNNEEDED, u32 *input_num UNNEEDED, u32 *blockheight UNNEEDED)
{ fprintf(stderr, "fromwire_onchain_spent called!\n"); abort(); }
/* Generated stub for htlc_offered_wscript */
u8 *htlc_offered_wscript(const tal_t *ctx UNNEEDED,
			 const struct ripemd160 *ripemd UNNEEDED,
			 const struct keyset *keyset UNNEEDED)
{ fprintf(stderr, "htlc_offered_wscript called!\n"); abort(); }
/* Generated stub for htlc_received_wscript */
u8 *htlc_received_wscript(const tal_t *ctx UNNEEDED,
			  const struct ripemd160 *ripemd UNNEEDED,
			  const struct abs_locktime *expiry UNNEEDED,
			  const struct keyset *keyset UNNEEDED)
{ fprintf(stderr, "htlc_received_wscript called!\n"); abort(); }
/* Generated stub for htlc_success_tx */
struct bitcoin_tx *htlc_success_tx(const tal_t *ctx UNNEEDED,
				   const struct bitcoin_txid *commit_txid UNNEEDED,
				   unsigned int commit_output_number UNNEEDED,
				   u64 htlc_msatoshi UNNEEDED,
				   u16 to_self_delay UNNEEDED,
				   u32 feerate_per_kw UNNEEDED,
				   const struct keyset *keyset UNNEEDED)
{ fprintf(stderr, "htlc_success_tx called!\n"); abort(); }
/* Generated stub for htlc_timeout_tx */
struct bitcoin_tx *htlc_timeout_tx(const tal_t *ctx UNNEEDED,
				   const struct bitcoin_txid *commit_txid UNNEEDED,
				   unsigned int commit_output_number UNNEEDED,
				   u64 htlc_msatoshi UNNEEDED,
				   u32 cltv_expiry UNNEEDED,
				   u16 to_self_delay UNNEEDED,
				   u32 feerate_per_kw UNNEEDED,
				   const struct keyset *keyset UNNEEDED)
{ fprintf(stderr, "htlc_timeout_tx called!\n"); abort(); }
/* Generated stub for master_badmsg */
void master_badmsg(u32 type_expected UNNEEDED, const u8 *msg)
{ fprintf(stderr, "master_badmsg called!\n"); abort(); }
/* Generated stub for peer_billboard */
void peer_billboard(bool perm UNNEEDED, const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "peer_billboard called!\n"); abort(); }
/* Generated stub for shachain_get_secret */
bool shachain_get_secret(const struct shachain *shachain UNNEEDED,
			 u64 commit_num UNNEEDED,
			 struct secret *preimage UNNEEDED)
{ fprintf(stderr, "shachain_get_secret called!\n"); abort(); }
/* Generated stub for status_failed */
void status_failed(enum status_failreason code UNNEEDED,
		   const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "status_failed called!\n"); abort(); }
/* Generated stub for status_fmt */
void status_fmt(enum log_level level UNNEEDED, const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "status_fmt called!\n"); abort(); }
/* Generated stub for status_setup_sync */
void status_setup_sync(int fd UNNEEDED)
{ fprintf(stderr, "status_setup_sync called!\n"); abort(); }
/* Generated stub for subdaemon_setup */
void subdaemon_setup(int argc UNNEEDED, char *argv[])
{ fprintf(stderr, "subdaemon_setup called!\n"); abort(); }
/* Generated stub for to_self_wscript */
u8 *to_self_wscript(const tal_t *ctx UNNEEDED,
		    u16 to_self_delay UNNEEDED,
		    const struct keyset *keyset UNNEEDED)
{ fprintf(stderr, "to_self_wscript called!\n"); abort(); }
/* Generated stub for towire_hsm_get_per_commitment_point */
u8 *towire_hsm_get_per_commitment_point(const tal_t *ctx UNNEEDED, u64 n UNNEEDED)
{ fprintf(stderr, "towire_hsm_get_per_commitment_point called!\n"); abort(); }
/* Generated stub for towire_hsm_sign_delayed_payment_to_us */
u8 *towire_hsm_sign_delayed_payment_to_us(const tal_t *ctx UNNEEDED, u64 commit_num UNNEEDED, const struct bitcoin_tx *tx UNNEEDED, const u8 *wscript UNNEEDED, u64 input_amount UNNEEDED)
{ fprintf(stderr, "towire_hsm_sign_delayed_payment_to_us called!\n"); abort(); }
/* Generated stub for towire_hsm_sign_local_htlc_tx */
u8 *towire_hsm_sign_local_htlc_tx(const tal_t *ctx UNNEEDED, u64 commit_num UNNEEDED, const struct bitcoin_tx *tx UNNEEDED, const u8 *wscript UNNEEDED, u64 input_amount UNNEEDED)
{ fprintf(stderr, "towire_hsm_sign_local_htlc_tx called!\n"); abort(); }
/* Generated stub for towire_hsm_sign_penalty_to_us */
u8 *towire_hsm_sign_penalty_to_us(const tal_t *ctx UNNEEDED, const struct secret *revocation_secret UNNEEDED, const struct bitcoin_tx *tx UNNEEDED, const u8 *wscript UNNEEDED, u64 input_amount UNNEEDED)
{ fprintf(stderr, "towire_hsm_sign_penalty_to_us called!\n"); abort(); }
/* Generated stub for towire_hsm_sign_remote_htlc_to_us */
u8 *towire_hsm_sign_remote_htlc_to_us(const tal_t *ctx UNNEEDED, const struct pubkey *remote_per_commitment_point UNNEEDED, const struct bitcoin_tx *tx UNNEEDED, const u8 *wscript UNNEEDED, u64 input_amount UNNEEDED)
{ fprintf(stderr, "towire_hsm_sign_remote_htlc_to_us called!\n"); abort(); }
/* Generated stub for towire_onchain_add_utxo */
u8 *towire_onchain_add_utxo(const tal_t *ctx UNNEEDED, const struct bitcoin_txid *prev_out_tx UNNEEDED, u32 prev_out_index UNNEEDED, const struct pubkey *per_commit_point UNNEEDED, u64 value UNNEEDED, u32 blockheight UNNEEDED)
{ fprintf(stderr, "towire_onchain_add_utxo called!\n"); abort(); }
/* Generated stub for towire_onchain_all_irrevocably_resolved */
u8 *towire_onchain_all_irrevocably_resolved(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "towire_onchain_all_irrevocably_resolved called!\n"); abort(); }
/* Generated stub for towire_onchain_broadcast_tx */
u8 *towire_onchain_broadcast_tx(const tal_t *ctx UNNEEDED, const struct bitcoin_tx *tx UNNEEDED)
{ fprintf(stderr, "towire_onchain_broadcast_tx called!\n"); abort(); }
/* Generated stub for towire_onchain_extracted_preimage */
u8 *towire_onchain_extracted_preimage(const tal_t *ctx UNNEEDED, const struct preimage *preimage UNNEEDED)
{ fprintf(stderr, "towire_onchain_extracted_preimage called!\n"); abort(); }
/* Generated stub for towire_onchain_htlc_timeout */
u8 *towire_onchain_htlc_timeout(const tal_t *ctx UNNEEDED, const struct htlc_stub *htlc UNNEEDED)
{ fprintf(stderr, "towire_onchain_htlc_timeout called!\n"); abort(); }
/* Generated stub for towire_onchain_init_reply */
u8 *towire_onchain_init_reply(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "towire_onchain_init_reply called!\n"); abort(); }
/* Generated stub for towire_onchain_missing_htlc_output */
u8 *towire_onchain_missing_htlc_output(const tal_t *ctx UNNEEDED, const struct htlc_stub *htlc UNNEEDED)
{ fprintf(stderr, "towire_onchain_missing_htlc_output called!\n"); abort(); }
/* Generated stub for towire_onchain_unwatch_tx */
u8 *towire_onchain_unwatch_tx(const tal_t *ctx UNNEEDED, const struct bitcoin_txid *txid UNNEEDED)
{ fprintf(stderr, "towire_onchain_unwatch_tx called!\n"); abort(); }
/* Generated stub for wire_sync_read */
u8 *wire_sync_read(const tal_t *ctx UNNEEDED, int fd UNNEEDED)
{ fprintf(stderr, "wire_sync_read called!\n"); abort(); }
/* Generated stub for wire_sync_write */
bool wire_sync_write(int fd UNNEEDED, const void *msg TAKES UNNEEDED)
{ fprintf(stderr, "wire_sync_write called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

#if DEVELOPER
/* Generated stub for dump_memleak */
bool dump_memleak(struct htable *memtable UNNEEDED)
{ fprintf(stderr, "dump_memleak called!\n"); abort(); }
/* Generated stub for memleak_enter_allocations */
struct htable *memleak_enter_allocations(const tal_t *ctx UNNEEDED,
					 const void *exclude1 UNNEEDED,
					 const void *exclude2 UNNEEDED)
{ fprintf(stderr, "memleak_enter_allocations called!\n"); abort(); }
/* Generated stub for memleak_remove_referenced */
void memleak_remove_referenced(struct htable *memtable UNNEEDED, const void *root UNNEEDED)
{ fprintf(stderr, "memleak_remove_referenced called!\n"); abort(); }
/* Generated stub for memleak_scan_region */
void memleak_scan_region(struct htable *memtable UNNEEDED,
			 const void *p UNNEEDED, size_t bytelen UNNEEDED)
{ fprintf(stderr, "memleak_scan_region called!\n"); abort(); }
/* Generated stub for notleak_ */
void *notleak_(const void *ptr UNNEEDED, bool plus_children UNNEEDED)
{ fprintf(stderr, "notleak_ called!\n"); abort(); }
#endif

int main(int argc, char *argv[])
{
	setup_locale();

	struct bitcoin_tx *tx;
	struct bitcoin_signature sig;
	u8 *der, *wscript;
	u64 fee;
	struct pubkey htlc_key;
	struct keyset *keys;
	struct timeabs start, end;
	int iterations = 1000;

	secp256k1_ctx = secp256k1_context_create(SECP256K1_CONTEXT_VERIFY
						 | SECP256K1_CONTEXT_SIGN);
	setup_tmpctx();
	tx = bitcoin_tx_from_hex(tmpctx, "0200000001e1ebca08cf1c301ac563580a1126d5c8fcb0e5e2043230b852c726553caf1e1d0000000000000000000160ae0a000000000022002082e03c5a9cb79c82cd5a0572dc175290bc044609aabe9cc852d61927436041796d000000",
				 strlen("0200000001e1ebca08cf1c301ac563580a1126d5c8fcb0e5e2043230b852c726553caf1e1d0000000000000000000160ae0a000000000022002082e03c5a9cb79c82cd5a0572dc175290bc044609aabe9cc852d61927436041796d000000"));
	tx->input[0].amount = tal(tx, u64);
	*tx->input[0].amount = 700000;
	der = tal_hexdata(tmpctx, "30450221009b2e0eef267b94c3899fb0dc7375012e2cee4c10348a068fe78d1b82b4b14036022077c3fad3adac2ddf33f415e45f0daf6658b7a0b09647de4443938ae2dbafe2b9" "01",
			  strlen("30450221009b2e0eef267b94c3899fb0dc7375012e2cee4c10348a068fe78d1b82b4b14036022077c3fad3adac2ddf33f415e45f0daf6658b7a0b09647de4443938ae2dbafe2b9" "01"));
	if (!signature_from_der(der, tal_count(der), &sig))
		abort();

	wscript = tal_hexdata(tmpctx, "76a914a8c40c334351dbe8e5908544f1c98fbcfb8719fc8763ac6721038ffd2621647812011960152bfb79c5a2787dfe6c4f37e2222547de054432eb7f7c820120876475527c2103cf8e2f193a6aed60db80af75f3c8d59c2de735b299b7c7083527be9bd23b77a852ae67a914b8bcd51efa35be1e50ae2d5f72f4500acb005c9c88ac6868", strlen("76a914a8c40c334351dbe8e5908544f1c98fbcfb8719fc8763ac6721038ffd2621647812011960152bfb79c5a2787dfe6c4f37e2222547de054432eb7f7c820120876475527c2103cf8e2f193a6aed60db80af75f3c8d59c2de735b299b7c7083527be9bd23b77a852ae67a914b8bcd51efa35be1e50ae2d5f72f4500acb005c9c88ac6868"));
	if (!pubkey_from_hexstr("038ffd2621647812011960152bfb79c5a2787dfe6c4f37e2222547de054432eb7f",
				strlen("038ffd2621647812011960152bfb79c5a2787dfe6c4f37e2222547de054432eb7f"),
				&htlc_key))
		abort();

	/* Dance around a little because keyset is const */
	keys = tal(tmpctx, struct keyset);
	keys->other_htlc_key = htlc_key;
	keyset = keys;

	if (argc > 1)
		iterations = atoi(argv[1]);
	max_possible_feerate = 250000;
	min_possible_feerate = max_possible_feerate + 1 - iterations;

	start = time_now();
	fee = grind_htlc_tx_fee(tx, &sig, wscript, 663);
	end = time_now();
	assert(fee == 165750);
	printf("%u iterations in %"PRIu64" msec = %"PRIu64" nsec each\n",
	       iterations,
	       time_to_msec(time_between(end, start)),
	       time_to_nsec(time_divide(time_between(end, start), iterations)));

	tal_free(tmpctx);
	secp256k1_context_destroy(secp256k1_ctx);
	return 0;
}
