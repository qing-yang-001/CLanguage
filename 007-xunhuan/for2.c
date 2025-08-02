/*
 * @Author: BTX\baitongxin 2861473220qq.com
 * @Date: 2025-08-02 21:39:56
 * @LastEditors: BTX\baitongxin 2861473220qq.com
 * @LastEditTime: 2025-08-02 21:43:13
 * @FilePath: \CLanguage\007-xunhuan\for2.c
 * @Description: for循环的嵌套使用
 */
#include <stdio.h>
int main()
{
  int i, j;
  for (i = 1; i <= 3; i++)
  {
    for (j = 1; j <= 4; j++)
    {
      printf("%d,%d\n", i, j);
    }
  }
  return 0;
}