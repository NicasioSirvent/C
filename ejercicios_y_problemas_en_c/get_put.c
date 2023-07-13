#include <stdio.h>

void main(void){
//  while ( putchar(getchar()) != '*'); //tambien display *
  char car;
  while ((car = getchar()) != '*')
    putchar(car);
}
