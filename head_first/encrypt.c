#include "encrypt.h"

void encrypt( char *mensaje ) {
  while( *mensaje++ )
    *mensaje ^= 31;
}

