#include <stdio.h>
void main() {
  char c1; /* Rango de representación: -128 a 127 */
  unsigned char c2; /* Rango de representación: 0 a 255 */

  c1='A';
  printf("\nEl valor de c1 es [%c]",c1);
  c1=65;
  printf("\nEl valor de c1 es [%c]",c1);
  c1=0101;
  printf("\nEl valor de c1 es [%c]",c1); 
  c1='\101';
  printf("\nEl valor de c1 es [%c]",c1);
  c1=0x41;
  printf("\nEl valor de c1 es [%c]",c1);
  c1='\x41';
  printf("\nEl valor de c1 es [%c]\n",c1);
  c2=175;
  printf("\nEl valor de c2 es [%c]\n",c2);
}
