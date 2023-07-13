#include <stdio.h>

void main(){
  char *p = "Adios Mundo Cruel Arggggg";
  while (putchar(*p++));
  getchar();
}
