#include <stdio.h>

int larger( int a, int b){
  return (a > b) ? a : b;
}

int main(){
  int mayor = larger(100,1000);
  printf("El numero mayor es %i\n", mayor);
  return 0;
}
