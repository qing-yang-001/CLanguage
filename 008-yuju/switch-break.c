/*
 * @Author: BTX\baitongxin 2861473220qq.com
 * @Date: 2025-08-02 21:54:18
 * @LastEditors: BTX\baitongxin 2861473220qq.com
 * @LastEditTime: 2025-08-02 22:40:51
 * @FilePath: \CLanguage\008-yuju\switch-break.c
 * @Description: switch-case中break语句的使用
 */
#include <stdio.h>
int main()
{
  int i, score;
  printf("请输入你的分数：");
  scanf("%d", &score);
  if (score < 0 || score > 100)
  {
    printf("分数输入错误，请输入0-100之间的整数。\n");
    return 1; // 如果分数不在0-100之间，返回错误代码
  }
  if (score == 100)
  {
    printf("你的成绩为满分！\n");
    return 0; // 如果分数是100，直接返回
  }
  else
  {
    i = score / 10; // 取分数的十位数
    switch (i)
    {
    case 9:
      printf("你的成绩为优秀！\n");
      break;
    case 8:
      printf("你的成绩为良好！\n");
      break;
    case 7:
      printf("你的成绩为中等！\n");
      break;
    case 6:
      printf("你的成绩为及格！\n");
      break;
    default:
      printf("你的成绩为不及格！\n");
      break;
    }
  }
  return 0;
}