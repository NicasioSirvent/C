#include <stdio.h>
#include <stdlib.h>

int main() {

  char carta[3];  //array char 3
  int cuenta = 0;

  while( carta[0] != 'X' ){
  
    puts("Siguiente carta:");  //pedimos carta
    scanf("%2s",carta);  //guardamos en array

    int valor = 0;

    switch( carta[0] ){

    case 'K':
    case 'Q':
    case 'J':
      valor = 10;
      break;
    case 'A':
      valor = 11;
      break;
    case 'X':
      continue;
    default:
      valor = atoi(carta);

      if( valor < 1 || valor > 10){
        puts("Mi no Entender!");
        continue;
      }
      break;
    }

    //printf("%d\n", valor);

    if( valor > 2 && valor < 7 )
      cuenta++;
    else if( valor == 10 )
      cuenta--;
    printf("Cuenta Actual:%d\n", cuenta);
  }

return 0;
}
