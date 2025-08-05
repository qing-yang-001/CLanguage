/*
 * @Author: BTX\baitongxin 2861473220qq.com
 * @Date: 2025-08-05 16:35:24
 * @LastEditors: BTX\baitongxin 2861473220qq.com
 * @LastEditTime: 2025-08-05 16:49:44
 * @FilePath: \CLanguage\011-zhizhen\zhizhen1.c
 * @Description: 指针的作用1：减少内存占用，避免了值传递时的数据复制
 */
#include <stdio.h>
int FindMax(int *array, int lenth)
{
  int i;
  int max = array[0];
  for (i = 1; i < lenth; i++)
  {
    if (max < array[i])
    {
    }
  }
}

int main()
{
  int a[10] = {55, 22, 107, 321, 79, 15, 35, 64, 58, 90};
  int max, lenth = 10;
  max = FindMax(a, lenth);
  printf("max=%d\n", max);
  return 0;
}
