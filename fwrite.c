#include <stdio.h>
#include <math.h>

int main(){
  FILE* fd;
  double x;
  fd = fopen("dd.num", "wb");
  for (x=0.5; x>0.01;){
    fwrite(&x, sizeof(double), 1, fd);
    printf("%.3f\n", x);
    x = pow(x,2.);
  }
  fclose(fd);
  return 0;
}
