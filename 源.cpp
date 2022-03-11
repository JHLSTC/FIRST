//#include<stdio.h>
//int  cheak(void)
//{
//	int a = 0;
//	int b = 0;
//		int c = 0;
//	int li = 1;
//	for (int i =0;i <= 9;i++)
//	{
//		for (int j = 0; j <= 9; j++)
//		{
//			if (i != j)
//			{
//				c = i * 1000 + i * 100 + j * 10 + j;
//				for (int k = 31; k <= 99; k++)
//				{
//					
//					if (k * k == c)
//					{
//						li = 0;
//						return c;
//
//					}  
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	//条件
//	//两个不同的数组成一个四位数
//	//且前两个数相同
//	//四位数为某个术的平方
//	int c = cheak();
//	printf("%d", c);
//	return 0;
//}
//修改并且优化
//1.占用空间太大
//2.循环过多；
#include<stdio.h>
int  cheak(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int li = 1;
	for (int i = 0; i <= 9; i++)
	{
		if (li == 0)
			break;
		for (int j = 0; j <= 9; j++)
		{
			if (li == 0)
				break;
			if (i != j)
			{
				c = i * 1000 + i * 100 + j * 10 + j;
				for (int k = 31; k <= 99; k++)
				{

					if (k * k == c)
					{
						li = 0;
						return c;

					}
				}
			}
		}
	}
}

int main()
{
	//条件
	//两个不同的数组成一个四位数
	//且前两个数相同
	//四位数为某个术的平方
	int c = cheak();
	printf("%d", c);
	return 0;
}