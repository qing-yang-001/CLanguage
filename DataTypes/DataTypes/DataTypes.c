#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS // ��ֹ��ȫ����
int main() {
	char name[20];//����
	char id[10];//ѧ��
	int age;//����
	float salary;//нˮ
	printf("����������: ");
	scanf("%s", name);//%s�ַ���
	printf("������ѧ��: ");
	scanf("%s", id);
	printf("����������: ");
	scanf("%d", &age); //%d����
	printf("������нˮ: ");
	scanf("%f", &salary);	//%f������
	printf("����: %s\n,���ţ�%s\n", name,id);
	printf("����: %d\n,нˮ��%f\n", age,salary);
}