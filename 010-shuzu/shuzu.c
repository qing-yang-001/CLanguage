/*
 * @Author: BTX\baitongxin 2861473220qq.com
 * @Date: 2025-08-04 17:22:36
 * @LastEditors: BTX\baitongxin 2861473220qq.com
 * @LastEditTime: 2025-08-04 17:26:16
 * @FilePath: \CLanguage\010-shuzu\shuzu.c
 * @Description: 自定义文件描述内容
 */
#include <stdio.h>
int main()
{
  int arr[10];
  int i;
  for (i = 0; i < 10; i++)
  {
    arr[i] = i + 100;
  }
  for (i = 0; i < 10; i++)
  {
    printf("arr[%d]=%d \n", i, arr[i]);
  }
  return 0;
}