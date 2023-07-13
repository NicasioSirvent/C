#include <stdio.h>

int main() {
  int comision;
  int ventas = 10;
  comision = ( ventas > 9 ) ? 2 : 4;
  printf("%d\n", comision);
  return 0;
}
