#include "stdafx.h"

/********************************************
 *±àÂëBase64
 ********************************************/
char *b64_encode(const unsigned char *in, size_t inputlen);
size_t b64_encoded_size(size_t inlen);

/********************************************
 *½âÂëBase64
 ********************************************/
int b64_decode(const char *in, unsigned char *out, size_t outlen);
size_t b64_decoded_size(const char *in);



