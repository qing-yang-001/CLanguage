/*
 * @Author: BTX\baitongxin 2861473220qq.com
 * @Date: 2025-08-02 22:46:44
 * @LastEditors: BTX\baitongxin 2861473220qq.com
 * @LastEditTime: 2025-08-02 22:47:21
 * @FilePath: \CLanguage\008-yuju\continue.c
 * @Description: continue语句的使用
 */
#include <stdio.h>
int main()
{
  int counter = 10;
  while (counter >= 0)
  {
    if (counter == 7)
    {
      counter--;
      continue;
    }
    printf("%d  ", counter);
    counter--;
  }
  return 0;
}

/* break是跳出当前循环，continue是跳过当前循环的剩余语句，继续下一次循环。*/