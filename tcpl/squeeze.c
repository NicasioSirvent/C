#include <stdio.h>

void squeeze( char a[], char b[]){
  int i, j, k;
  int rep = 0;
  k = 0; //nuevo indice...
  //por cada letra de a, recorrer b y ver si se repite
  //si letra repetida... no copiar...
  for(i = 0; a[i] != '\0'; i++){  //chars de a
    rep = 0;
    for(j = 0; b[j] != '\0'; j++){  //chars de b
      if(a[i] == b[j])
        rep = 1;
    }
    if(rep == 0)
      a[k++] = a[i];
  }
  a[k] = '\0';
}

int main(){

  char a[] = "palabramuylargadecojones";
  char b[] = "pa";
  squeeze(a, b);
  printf("%s\n", a);
  return 0;
}
