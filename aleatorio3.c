/*
Idea: este numero se puede usar como entrada a srand(), como alternativa
a usar time(NULL) o lo que sea.
*/

#include <stdio.h>

int main(){
  unsigned int randval;
  FILE *f;

  f = fopen("/dev/urandom", "r");
  fread(&randval, sizeof(randval), 1, f);
  fclose(f);

  printf("%u\n", randval);

  return 0;
}
