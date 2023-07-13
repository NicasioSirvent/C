#include <stdio.h>

long int fibonacci();

int main(){
  int n, i;
  printf("\nCuantos numeros de Fibonacci?:\n");
  scanf("%d", &n);
  for (i=0; i<n; i++){
    printf("%ld\n", fibonacci());
  }
  return 0;
}

long int fibonacci(){
  static long int x = 0;
  static long int y = 1;
  y = y + x;
  x = y - x;
  return y;

}
