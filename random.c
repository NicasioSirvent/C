#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  time_t *tt;  //puntero a time_t (unsigned long?)
  time(tt);  //lo paso a time, para que me de segundos desde 1.1.1970
  struct tm *mitm = localtime(tt);  //lo paso a localtime para que formatee estructura tm y me devuelva puntero
  printf("%d\n", mitm->tm_year);  //imprimo valor de estructura... de ejemplo.

  //srand(time(0));  //prueba ok, se pasa puntero nulo a time, (vs arriba), devuelve time_t (long) que uso como semilla de srand.
  srand(clock());  //otra semilla, tiempo de proceso actual....
  for (int i=0; i<10; i++)  
    printf("%x\n",rand()%255);  //mod255, para valor 0-255 (8bits).

  return 0;
}
