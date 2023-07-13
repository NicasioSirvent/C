/* getput3 */
/* Este programa captura e imprime caracteres */

#include <stdio.h>
#define STOP '*'

main(){
  char ch;

  while( (ch = getchar()) != STOP)
    putchar(ch);
}
