#include <stdio.h>

void addOne(int *);

void addOne( int *val ){
  *val += 1;
}

int main (){
  int valor = 10;
  printf("primero valor vale %d \n", valor);
  addOne( &valor );
  printf("despues valor vale %d\n", valor);
 
  return 0;
}
