#include<stdio.h>
void print(int* arr)
{
	int* bua = arr;
	while (20)//���д�����Ϊ20�����Լ�����ѭ��//���Һ���ָ�벻���ԼӼ���
	{
		printf("%d\n", *bua);
		bua++;
	}
}
int main()
{
	int arr[20] = { 0 };
	print(arr);
	return 0;
}