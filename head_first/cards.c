#include <stdio.h>
#include <stdlib.h>

int main() {

  char carta[3];  //array char 3
  puts("Siguiente carta:");  //pedimos carta
  scanf("%2s",carta);  //guardamos en array

  int valor = 0;

  if(carta[0] == 'K')
    valor = 10;              
  else if( carta[0] == 'Q')
    valor = 10;
  else if( carta[0] == 'J')
    valor = 10;
  else if( carta[0] == 'A')
    valor = 11;
  else
    valor = atoi(carta);

  
  printf("%d\n", valor);

  if( valor > 2 && valor < 8 )
    puts("Cuenta Arriba");
  else 
    puts("Cuenta Abajo!");

return 0;
}
