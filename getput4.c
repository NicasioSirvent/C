/*en linux, eof desde teclado es ctrl+d*/
#include<stdio.h>
main(){
  int ch, cuenta = 0;

  while( (ch=getchar()) != EOF ){
    putchar(ch);
    if( ch != '\n' ) 
      cuenta++;
  }
  printf("\nnumero:%d\n", cuenta);
}
