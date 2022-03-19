//int (*(*a)[10})(int ,int);//即是有函数指针的数组的空间；
//空间的使用特点是快速和分段；
//类型的确定之后会逐渐深入并加以定义；//typedef的类型名替代了变量名；
//回调函数提供了函数的代换；
////qsort(起始地址，数量，大小，比较方式）
//#include<stdio.h>
//#include<stdlib.h >
//int comp(const void *a, const void * b)
//{
//	return *(double *)a - *(double *) b;
//}
//int main()
//{
//	double arr[10] = { 0.22,0.33,0.44,1.56, 99,4.56 ,1,1,1,1};
//	qsort(arr, 10, sizeof(double), comp);
//	for (int y = 0; y < 10, y++)
//	{
//		printf()
//	}
//	return 0;
//}
////qsort()
////{
//	if (i == 1)
//		*arr;
//	while(次数)
//	{
//		if{}	*cmp(j, j + 1)
//		}
//		}
//}
//qsort(&,num,sizeof,int * a(void * b,const void * c))
//int GUN (const void * a ,const void * b )//外用指针，
//
#include<stdio.h>//拟qsort
void change(char*a, char*b, int c)
{
	while (c--)
	{
		int d = 0;
			d = *a;
		*a = *b;
		*b = d;
		a++;
		b++;
	}
}
void re_qsort(void* a,int b, int c, int (*d)(const void*, const void*))
{
	for (int e = 0; e < b - 1; e++)
	{
		int i = 0;
		for (int y = 0; y < b - 1 - e;y++)
		{
			if (d((char*)a + c * i, (char*)a + c * (i + 1)) > 0)
			{
				change((char*)a + c * i,(char*)a + c * (i + 1), c);
			}
			i++;
		}
	}
}
int b(const void* a, const void *b)
{
	return *(int*)b - *(int *)a;
}
int main()
{
	int a[10] = {
		1,2,3,4,5,6,7,8,9,10
	};

	re_qsort(a, 10, 4, b);
	for (int h = 0; h < 10; h++)
	{
		printf("%d\n", a[h]);
	}
	return 0;
}