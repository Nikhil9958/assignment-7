#include <stdio.h>

int main()
{
  int i, n, x, y, sum = 0;
  printf("Enter n: ");
  scanf("%d\n", &n);
  for(i=0; i<n; i++)
  {
    scanf("%*c,%f%*c", &x, &y);
    sum += x*y;
  }
  printf("Sum: %d\n", sum);
  return 0;
}