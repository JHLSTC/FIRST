#include<stdio.h>
int main()
{
	int a[10] = { 0 };
	int* b = a;
	int(*c)[10] = &a;//数组指针，即指向一组数的指针，有类型加数组长度加初始地址
	printf("%p\n", c);
	printf("%p\n", c + 1);
	printf("%p\n", a);
	printf("%p\n", a + 1);
	//理解
	//即指针就是操控一块空间，比如房间的左上角；
	//而变量名指的是那块空间里面所拥有的内容，即空间和空间内容；


		return 0;
}