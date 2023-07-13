/*
secuencia: 4 espacios, 1 estrella,
           3 espacios, 3 estrellas
           2 espacios, 5 est,

*/
#include <stdio.h>

const int num_lineas = 5;
const char blanco = ' ';
const char asterisco = '*';

void main() {
  int fila, blancos, conta;

  puts(" ");

  //por cada linea..
  for (fila = 1; fila < num_lineas; fila++){
    //primer bucle interno, 4,3,2,1
    for (blancos = num_lineas - fila; blancos > 0; blancos--)
      putchar(blanco);
    //segundo bucle, 1,3,5,7
    for (conta = 1; conta < 2 * fila; conta++)
      putchar(asterisco);
    puts("");
 }
}
