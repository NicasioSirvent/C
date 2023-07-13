/* Programa que medira tiempo needed para calcular factorial de nº */
#include <stdio.h>
#include <time.h>

int main(){
  float inicio, fin;
  int n,x;
  long fact;

  inicio = clock();
  do {
    printf("Factorial de (3 < x < 15): ");
    scanf("%d", &x);
  } while ( x <= 3 || x >= 15 );

  for (n=x, fact=1; n; n--)
    fact*=n;
  fin = clock();

  printf("\nFactorial de %d = %ld", x, fact);
  printf("\n Tiempo de proceso: %f, (%f segundos)\n",
    fin-inicio, (fin-inicio)/CLOCKS_PER_SEC);

  return 0;
}
