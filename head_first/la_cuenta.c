#include <stdio.h>

float total = 0.0;
short cuenta = 0;
short porciento_iva = 21;

float suma_con_iva( float f ) {
  float iva = 1 + porciento_iva / 100.0;
  total += f*iva;
  cuenta++;
  return total;
}

int main(){
  float val;
  printf("Precio del Item:");
  while( scanf( "%f", &val ) == 1 ){
    printf("Total por ahora: %.2f\n", suma_con_iva(val));
    printf("Precio del Item:");
  }
  printf("\nTotal Final: %.2f\n", total);
  printf("Numero de items: %hi\n", cuenta);
  return 0;
}
