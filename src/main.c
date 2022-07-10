#include <stdio.h>

float InverseSquareRoot(float x)
{
  float xhalf = 0.5f * x;
  int i = *(int*)&x;
  i = 0x5f3759df - (i >> 1);
  x = *(float*)&i;
  x = x * (1.5f - xhalf * x * x);
  return x;
}

int main()
{
  float x;
  printf("Enter a number: ");
  scanf("%f", &x);
  printf("%f\n", InverseSquareRoot(x));
  return 0;
}