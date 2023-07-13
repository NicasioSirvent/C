#include <stdio.h>
void main(){
  int n = 66;
  int* p = &n;  //puntero p apuntando a (direccion de) n
  printf("n = %d, &n = %p, p = %p, &p = %p\n", n, &n, p, &p);
}
