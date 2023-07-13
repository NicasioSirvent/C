#include <stdio.h>

void main(void){
  int Ndigitos, Pot, N;
 
  Ndigitos = 0;
  Pot = 1;
  printf("Dime Numero: ");
  scanf("%d", &N);

  while (Pot <= N) {
    Ndigitos++;
    Pot *= 10;
  }

  printf("Se necesitan %d digitos para representar %d.\n", Ndigitos, N);
}
