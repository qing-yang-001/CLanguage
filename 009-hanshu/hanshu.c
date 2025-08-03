/*
 * @Author: BTX\baitongxin 2861473220qq.com
 * @Date: 2025-08-03 11:23:18
 * @LastEditors: BTX\baitongxin 2861473220qq.com
 * @LastEditTime: 2025-08-03 11:23:29
 * @FilePath: \CLanguage\009-hanshu\hanshu.c
 * @Description:函数的调用*/

#include <stdio.h>
int max(int num1, int num2);
int main()
{
  int a, b, c;
  printf("Enter two numbers:");
  scanf("%d%d", &a, &b);
  c = max(a, b);
  printf("The maximum number is: %d", c);
  return 0;
}
int max(int num1, int num2)
{
  int max;
  if (num1 > num2)
    max = num1;
  else
    max = num2;
  return max;
}