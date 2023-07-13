#include <stdio.h>

int n = 100; //definicion de n, global.
static int m = 7; //m, static, solo usable aqui (m2);

void f(int i){
  n += (i+m);
}

void g(void){
  printf("n = %d\n", n);
}
