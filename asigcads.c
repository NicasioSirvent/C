#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 10

void salida(char*[], int*);
void entrada(char*[]);
int vocales(char*);

int main(){
  char *cad[N];
  int voc[N];
  entrada(cad);
  for (int j=0; j<N; j++)
    voc[j] = vocales(cad[j]);
  salida(cad, voc);
  return 0;
}

void entrada(char* cd[]){
  char B[121];
  printf("\n\tEscribe %d lineas de texto\n", N);
  for (int j=0; j<N; j++){
    fgets(B, 121, stdin);
    int tam = (strlen(B)+1)*sizeof(char);
    cd[j] = (char*)malloc(tam);
    strcpy(cd[j], B);
  }
}

int vocales(char* c){
  int k, j;
  for (j=k=0; j<strlen(c); j++){
    switch (tolower(*(c+j)) ){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u': 
        k++;
        printf("%c", *(c+j));
    }
  }
  return k;
}

void salida(char* cd[], int* v){
  puts("\n\tSalida de las lineas junto al numero de vocales");
  for (int j=0; j<N; j++)
    printf("%s : %d\n", cd[j], v[j]);
}
