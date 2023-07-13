#include <stdio.h>
#define LEN 81
#define STOP -1
#define NONUM 1
#define SINUM 0

int getint(int *ptint){
  char intarr[LEN];
  int ch;
  int ind = 0;

  while ( (ch = getchar()) == '\n' || ch == ' ' || ch == '\t' );

  while (ch != EOF && ch != '\n' && ch != ' ' && ind < LEN) {
    intarr[ind++] = ch;
    ch = getchar();
  }
  intarr[ind] = '\0';
  
  if (ch == EOF)
    return(STOP);
  else
    return (stoi(intarr, ptint));
}
