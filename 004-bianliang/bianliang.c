/*
 * @Author: BTX\baitongxin 2861473220qq.com
 * @Date: 2025-08-02 14:40:17
 * @LastEditors: BTX\baitongxin 2861473220qq.com
 * @LastEditTime: 2025-08-02 14:47:38
 * @FilePath: \CLanguage\004-bianliang\bianliang.c
 * @Description: 定义函数并使用函数进行加法运算；
 */

#include <stdio.h>
int a, b;
int add(int a, int b)
{
  return a + b;
}
int main()
{
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  int sum = add(a, b);
  printf("The sum is: %d", sum);
}