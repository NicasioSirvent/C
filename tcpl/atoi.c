#include <stdio.h>

/* convertimos char[] a entero.
*/
int atoi (char s[]){
  int i,n;
  //el for run hasta que char no 0-9!!!
  for (i=0, n=0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10 * n + (s[i] - '0');
  return n;
}

int main(){
  char palabra[80];
  scanf("%80s", palabra);
  printf("%d\n", atoi(palabra));
  return 0;
}
