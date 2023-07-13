#include <stdio.h>
#define MAXLINE 1000

// declaraciones
int ggetline( char line[], int maxline ); 
void copy( char to[], char from[] );
void reverse( char [], int size );

/* Print the longest input line */


int main(){
  int len;
  int max = 0;  //para almacenar valor maximo.
  char line[MAXLINE];
  char longest[MAXLINE];

  while ( (len = ggetline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  //al final, imprimo mas larga...
  if (max > 0)
    printf("%s", longest);
    reverse( longest, max);
  return 0;
}

int ggetline(char s[], int lim){
  int c, i;

  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  //Si \n, contar uno.
  if(c == '\n'){
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]){
  int i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

void reverse( char from[], int size ){
  for(int i = 0; i <= size; i++)
    putchar(from[size -i]);
  putchar('\n');
}
