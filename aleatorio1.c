#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
  int i;
  //randomize(); //utiliza libreria time, por que randomiza con tiempo.
  for(i=1; i<=10; i++)
    printf("%12d\n", rand());

  return 0;
}
