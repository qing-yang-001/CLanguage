#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS // 禁止安全警告
int main() {
	char name[20];//姓名
	char id[10];//学号
	int age;//年龄
	float salary;//薪水
	printf("请输入姓名: ");
	scanf("%s", name);//%s字符串
	printf("请输入学号: ");
	scanf("%s", id);
	printf("请输入年龄: ");
	scanf("%d", &age); //%d整型
	printf("请输入薪水: ");
	scanf("%f", &salary);	//%f浮点型
	printf("姓名: %s\n,工号：%s\n", name,id);
	printf("年龄: %d\n,薪水：%f\n", age,salary);
}