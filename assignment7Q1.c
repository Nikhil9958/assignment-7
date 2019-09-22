#include <stdio.h>

int main()
{
  int a, b, c, d;
  printf("Enter 4 numbers: ");
  scanf("%10d%10d%10d%10d", &a, &b, &c, &d);
  printf("%10d %10d\n%10d %10d\n", a, b, c, d);
  return 0;
}