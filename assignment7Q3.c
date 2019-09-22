#include <stdio.h>

int main()
{
  float a, b, c, d;
  printf("Enter 4 floating numbers: ");
  scanf("%f%f%f%f", &a, &b, &c, &d);
  printf("%10.3d %10.3d\n%10.5d %10.1d\n", a, b, c, d);
  return 0;
}