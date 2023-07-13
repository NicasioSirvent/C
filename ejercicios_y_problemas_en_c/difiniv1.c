#include <stdio.h>
int main() {
  int a,b,c,d;
  a = 'P';
  b = 80;
  c = 0120;
  d = 0x50;
  //c = '\120'; //octal
  //d = '\x50'; //hex

  printf("\n- El valor de  a es '%c'", a);
  printf("\n- El valor de  b es '%c'", b);
  printf("\n- El valor de  c es '%c'", c);
  printf("\n- El valor de  d es '%c'\n", d);
  return 0;
}
