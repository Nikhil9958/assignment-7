#include <stdio.h>

int main()
{
  float x, y;
  printf("Enter complex no: ");
  scanf("%f%fi", &x, &y);
  if((x > 0) && (y > 0))
  {
    printf("Complex no.: %+.2f%+.2fi\n", x, y);
  }
  else if(x == 0)
  {
    printf("Complex no.: %+.2fi\n", y);
  }
  else if(y == 0)
  {
    printf("Complex no.: %+.2f\n", x);
  }
  else
  {
    printf("Complex no.: 0");
  }
  return 0;
}