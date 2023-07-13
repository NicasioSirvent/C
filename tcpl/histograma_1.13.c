#include <stdio.h>

#define IN 1
#define OUT 0

/* Programa imprimira histograma de longitudes de palabras al inicio */

int main(){
  int c;
  int ws = 0; //word size
  int state = OUT;
  int array[10] = {0}; //almacenara tamaños 0/10..

  while ( (c = getchar()) != EOF ){
    //si char es espacio.. pongo state a out
    if ( c == ' ' || c == '\t' || c == '\n'){
      //si espacio, y antes letra... pongo a out e imprimo
      if (state == IN){
        //printf("%d\n", ws);
        array[ws]++;
        ws = 0;
        state = OUT;
      }
    }
    else if ( state = IN )
      ws++;
  }
  for (int i=0; i<10; i++){
    ws = array[i];
    while ( ws-- > 0)
      putchar('|');
    printf("(%d)\n", i);


    for(int j=0; j<10; j++){
     // printf(" %d %d %d %d %d %d %d %d %d %d \n ", );
    }
  }

  
  return 0;
}
