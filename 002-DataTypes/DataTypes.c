/*
 * @Author: BTX\baitongxin 2861473220qq.com
 * @Date: 2025-07-05 20:41:15
 * @LastEditors: BTX\baitongxin 2861473220qq.com
 * @LastEditTime: 2025-07-05 21:33:26
 * @FilePath: \CLanguage\002-DataTypes\DataTypes.c
 * @Description: 数据类型
 */

#include<stdio.h>
int main(){
    char name[20];//姓名
    char id[10];//学号
    int age;
    float salary;
    printf("请输入姓名：\n");
    scanf("%s",name);
    printf("请输入学号：\n");
    scanf("%s",id);
    printf("请输入年龄：\n");
    scanf("%d",&age);
    printf("请输入工资：\n");
    scanf("%f",&salary);
    printf("姓名：%s,\n学号：%s,\n年龄：%d,\n工资：%f,\n",name,id,age,salary);
    return 0;

    
}