#include <stdio.h>
#include <math.h> //idea:al añadir esto, tambie usar -lm en gcc

void potrat1(float, float);
void potrat2(float*, float*);

void main(){
  float a, b;
  a = 5.0; b = 1.0e2;

  potrat1(a, b);
  printf("\n a = %.1f b = %.1f", a, b);

  potrat2(&a, &b);
  printf("\n a = %.1f b = %.1f", a, b);

}

void potrat1(float x, float y)
{
  x = x*x;
  y = sqrt(y);  
}

void potrat2(float* x, float* y)
{
  *x = (*x)*(*x);
  *y = sqrt(*y);  
}


