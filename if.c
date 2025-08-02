#include <stdio.h>
int main()
{
  printf("please enter the value of x: ");
  int x;
  scanf("%d", &x);
  printf("please enter the value of y: ");
  int y;
  scanf("%d", &y);
  if (x > y)
  {
    printf("x is greater than y\n");
  }
  else
  {
    if (x == y)
    {
      printf("x is equal to y\n");
    }
    else
    {
      printf("x is less than y\n");
    }
  }
  return 0;
}