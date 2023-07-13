/* cuentach1 */
/* Este programón cuenta letras! */
#include <stdio.h>
#define STOP '*'

main(){
  char ch;
  int cuenta = 0;

  while( (ch = getchar()) != STOP){
    //putchar(ch); 
    if( ch != '\n')
      cuenta++;
  }
  printf("\nHe contado en total %d letras!\n", cuenta);
}
