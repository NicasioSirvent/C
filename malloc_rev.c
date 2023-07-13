/* ej: ./malloc_rev < /home/n/hoja_ruta_s5 */
#include <stdlib.h>
#include <stdio.h>

void main(){
  char *p;
  int i;
  p = (char*)malloc(1000);
  for (i=0; i<1000; i++)
    p[i] = getchar();
  for (i=999; i>=0; --i)
    putchar(p[i]);
  free(p);

  printf("\n");
  getchar();
}
