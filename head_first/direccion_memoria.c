#include <stdio.h>

int gnum;
int main(){
  int num = 4;
  printf("variable num de valor %d esta en direccion %p\n", num, &num);
  printf("variable gnum de valor %d esta en direccion %p\nn", gnum, &gnum);
  return 0;
}
