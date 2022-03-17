#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	while (a)
//	{
//		int b = 0;
//		b = a % 10;
//		a /= 10;
//		printf("%d", b);
//
//	}
//
//	return 0;
//}
//二维数组传参 char (* a)[]
//  sizeof()检测出申请的空间大小
//strlen()检测/0；
//一级数组
//int (*p)(int, int) = &Add;//函数指针的定义

//void (*p)(char*) = &test;
//函数指针的限制比较宽松；
//无论几阶应用都差不多；
//函数名和其指针差不多；
void win()
{
	int i = 0;
	char a[] = { "im the king of the world !!!!!!" };
	while (a[i])
	{
		printf("%c", a[i++]);
	}
}
int main()
{
	win();
	return 0;
}