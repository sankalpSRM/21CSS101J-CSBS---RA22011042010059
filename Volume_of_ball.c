#include <stdio.h>
#include <math.h>
#define Pi 3.14
int main () 
{
  float r, volume;
  scanf("%f", &r);
  volume = (4.0/3.0*Pi*r*r*r);
  printf("%f", volume);
  return 0;
}
