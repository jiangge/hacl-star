/* This file auto-generated by KreMLin! */
#ifndef __Hacl_Symmetric_Salsa20_H
#define __Hacl_Symmetric_Salsa20_H

#include "kremlib.h"
#include "testlib.h"

void
Hacl_Symmetric_Salsa20_crypto_stream_salsa20_xor_ic(
  uint8_t *c,
  uint8_t *m,
  uint64_t mlen,
  uint8_t *n,
  uint64_t ic,
  uint8_t *k
);

void
Hacl_Symmetric_Salsa20_crypto_stream_salsa20_xor(
  uint8_t *c,
  uint8_t *m,
  uint64_t mlen,
  uint8_t *n,
  uint8_t *k
);

void
Hacl_Symmetric_Salsa20_crypto_stream_salsa20(uint8_t *c, uint64_t clen, uint8_t *n, uint8_t *k);

#endif
