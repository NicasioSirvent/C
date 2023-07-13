#include <stdio.h>
#define INCRE 10
#define ITER 4

void plusten( int );

void plusten( int iCount ) {
  static int iNum = INCRE;
  printf("Call nº %d to plusten() = %d\n", iCount, iNum);
  iNum += INCRE;
}

int main( void ) {
  int i;
  for (i=1; i <= ITER; i++)
    plusten(i);

  return 0;
}
