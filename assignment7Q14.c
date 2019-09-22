#include <stdio.h>

int main()
{
  int i, n, number, sum = 0;
  scanf("%d,", &n);
  for(i=0; i<n; i++)
  {
    scanf("%d,", &number);
    sum += number;
  }
  printf("Sum: %d\n", sum);
  return 0;
}