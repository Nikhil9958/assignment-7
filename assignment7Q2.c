#include <stdio.h>

int main()
{
  int a, b, c, d, e, f;
  printf("Enter 6 numbers: ");
  scanf("%10d%10d%5d%5d%5d%5d", &a, &b, &c, &d, &e, &f);
  printf("%10d %10d\n%5d %5d %5d %5d\n", a, b, c, d, e, f);
  return 0;
}