/*
 * @Author: BTX\baitongxin 2861473220qq.com
 * @Date: 2025-07-11 22:47:44
 * @LastEditors: BTX\baitongxin 2861473220qq.com
 * @LastEditTime: 2025-07-11 22:54:53
 * @FilePath: \CLanguage\003-Canlog18.c
 * @Description: 18岁可登录；
 */
#include<stdio.h>
int main(){
     int num;
     printf("Enter your age:");
     scanf("%d",&num);
     if ((num<18))
     {
        printf("you are not eligible for voting");
     }
     else
     {
        printf("You can vote!");
     }
     return 0;
     
     
}