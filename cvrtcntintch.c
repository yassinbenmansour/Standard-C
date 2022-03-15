#include <stdio.h> 
#define INCH_TO_CM 2.54
int main() 
{
  double inch, cm;
  printf("Input the distance in cm:\n");
  scanf("%lf", &cm);
  inch = cm / INCH_TO_CM;
  printf("Distance of %0.2lf cms is = %0.2lf inches\n", cm, inch);
  return 0;
}
