/* This file was auto-generated by KreMLin! */
#include "kremlib.h"
#ifndef __SHA2_512_H
#define __SHA2_512_H


#include "FStar.h"
#include "testlib.h"

typedef uint8_t Hacl_Hash_Lib_Create_uint8_t;

typedef uint32_t Hacl_Hash_Lib_Create_uint32_t;

typedef uint64_t Hacl_Hash_Lib_Create_uint64_t;

typedef uint8_t Hacl_Hash_Lib_Create_uint8_ht;

typedef uint32_t Hacl_Hash_Lib_Create_uint32_ht;

typedef uint64_t Hacl_Hash_Lib_Create_uint64_ht;

typedef uint8_t *Hacl_Hash_Lib_Create_uint8_p;

typedef uint32_t *Hacl_Hash_Lib_Create_uint32_p;

typedef uint64_t *Hacl_Hash_Lib_Create_uint64_p;

typedef uint8_t *Hacl_Hash_Lib_LoadStore_uint8_p;

typedef uint8_t Hacl_Hash_SHA2_512_uint8_t;

typedef uint32_t Hacl_Hash_SHA2_512_uint32_t;

typedef uint64_t Hacl_Hash_SHA2_512_uint64_t;

typedef uint8_t Hacl_Hash_SHA2_512_uint8_ht;

typedef uint32_t Hacl_Hash_SHA2_512_uint32_ht;

typedef uint64_t Hacl_Hash_SHA2_512_uint64_ht;

typedef FStar_UInt128_uint128 Hacl_Hash_SHA2_512_uint128_ht;

typedef uint64_t *Hacl_Hash_SHA2_512_uint64_p;

typedef uint8_t *Hacl_Hash_SHA2_512_uint8_p;

typedef uint8_t SHA2_512_uint8_t;

typedef uint32_t SHA2_512_uint32_t;

typedef uint64_t SHA2_512_uint64_t;

typedef uint8_t SHA2_512_uint8_ht;

typedef uint32_t SHA2_512_uint32_ht;

typedef uint64_t SHA2_512_uint64_ht;

typedef FStar_UInt128_uint128 SHA2_512_uint128_ht;

typedef uint64_t *SHA2_512_uint64_p;

typedef uint8_t *SHA2_512_uint8_p;

extern uint32_t SHA2_512_size_word;

extern uint32_t SHA2_512_size_hash_w;

extern uint32_t SHA2_512_size_block_w;

extern uint32_t SHA2_512_size_hash;

extern uint32_t SHA2_512_size_block;

extern uint32_t SHA2_512_size_k_w;

extern uint32_t SHA2_512_size_ws_w;

extern uint32_t SHA2_512_size_whash_w;

extern uint32_t SHA2_512_size_count_w;

extern uint32_t SHA2_512_size_len_8;

extern uint32_t SHA2_512_size_state;

extern uint32_t SHA2_512_pos_k_w;

extern uint32_t SHA2_512_pos_ws_w;

extern uint32_t SHA2_512_pos_whash_w;

extern uint32_t SHA2_512_pos_count_w;

void SHA2_512_init(uint64_t *state);

void SHA2_512_update(uint64_t *state, uint8_t *data);

void SHA2_512_update_multi(uint64_t *state, uint8_t *data, uint32_t n1);

void SHA2_512_update_last(uint64_t *state, uint8_t *data, uint64_t len);

void SHA2_512_finish(uint64_t *state, uint8_t *hash1);

void SHA2_512_hash(uint8_t *hash1, uint8_t *input, uint32_t len);
#endif
