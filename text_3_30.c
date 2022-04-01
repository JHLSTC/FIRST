////动态申请除了依据类型申请空间，还可以动态增长自定类型的空间；
//#include<stdio.h>
//#include<malloc.h>
//struct a
//{
//	int b;
//	int c[0];
//};
//int main()
//{
//	struct a * s =malloc(4 + 5 *sizeof(int));
//	printf("%d", sizeof(*s));
//
//	return 0;
//}
////由上面的函数知动态函数不计入空间内容；
////结构体访问数组名为其偏移地址；
////而访问指针为访问其内容；
#include<stdio.h>
int main()
{
	char i[15] = { 0 };
	printf("%x\n", i);
	printf("%x", i + 1)
		;

	return 0;
}
//访问的两种平行关系-.>直接与间接访问；
/*占位符*/;