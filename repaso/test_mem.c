#include <stdio.h>
#include <stdlib.h>

int main() {
  void *p;
  long m = 0;

  for( int i = 1; i < 100000; i++) {
    p = malloc(1000);
    if ( p == NULL ) break;
    m += 1000;
  }
  //printf("\n---------\nTotal de memoria asignada: %ld bytes.\n-----------\n", m);
  printf("\n---------\nTotal de memoria asignada: %ld MB.\n-----------\n", m/(1024*1024));

  return 0;
}
