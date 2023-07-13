#include <stdio.h>
#define TOPE 0.933
#define ESCALA 0.6167

int main(){
  float zapato, pie;
  printf("Número Zapato         Centímetros pie\n");
  zapato = 30.0;
  while (zapato < 48.5){
    pie = ESCALA * zapato * TOPE;
    printf("%10.1f %16.2f cm.\n", zapato, pie);
    zapato+=.5;
  }
  puts("Usted ya sabe donde le aprieta el zapato!");
  return 0;
}


