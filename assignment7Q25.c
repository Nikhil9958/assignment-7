#include <stdio.h>

int main()
{
  int x, y;
  printf("Enter a number: ");
  scanf("%1d%*d", &x);
  printf("Enter a number: ");
  scanf("%1d%*d", &y);
  printf("Product of digit: %d\n", x*y);
  return 0;
}