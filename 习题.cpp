#include<stdio.h>
void print(int* arr)
{
	int* bua = arr;
	while (20)//运行错误；因为20不能自减，死循环//而且函数指针不能自加减；
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