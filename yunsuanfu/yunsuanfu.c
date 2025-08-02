/*
 * @Author: BTX\baitongxin 2861473220qq.com
 * @Date: 2025-08-02 16:23:00
 * @LastEditors: BTX\baitongxin 2861473220qq.com
 * @LastEditTime: 2025-08-02 16:50:52
 * @FilePath: \CLanguage\yunsuanfu\yunsuanfu.c
 * @Description: a++和++a的区别.
 */
#include <stdio.h>

int main()
{
  int a, c;
  a = 10;
  c = a++;
  printf("先赋值后运算\n");
  printf("a=%d\nc=%d\n", a, c);
  a = 10;
  c = ++a;
  printf("先运算后赋值\n");
  printf("a=%d\nc=%d\n", a, c);
}