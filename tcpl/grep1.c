#include <stdio.h>
#define MAXLINE 1000

int migetline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";  //pattern to search for

int main(){
  char line[MAXLINE];
  int found = 0;
  while (migetline(line, MAXLINE) > 0)
    if (strindex(line, pattern) >= 0) {
      printf("%s", line);
      found++;
    }
  return found;
}

//get line into s, return length
int migetline(char s[], int lim){
  int c, i;
  i = 0;
  while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
    s[i++] = c;
  if (c == '\n')
    s[i++] = c;
  s[i] = '\0';
  return i;
}

// strindex: return index of t in s, or -1 if nonde;
int strindex(char s[], char t[]){
  int i, j, k;
  //por cada char in s
  for (i = 0; s[i] != '\0'; i++) {
    //miro a ver si los char de t coinciden a partir de s[j] (i)
    //si primero coincide pero quedan mas chars en t, mirar el segundo...
    //se continua hasta que ... o lleguemos al ultimo, o no sea igual....
    //si se llega al ultimo char de t el if de abajo sera true y devolvemos posicion de i
    //si no es igual alguno... se pasa for, se llega a if.. pero como t no sera '\0'... no pasa nada; siguiente i.
    for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
      ;
    //cuando se llega a '\0' de t, y hay coincidencias.. devolver indice.
    if (k > 0 && t[k] == '\0')
      return i;
  }
  return -1;
}
