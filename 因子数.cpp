//#include<stdio.h>//数等于所以因子之和；找出1000以内所的数
//
//int a[1000] = { 0 };
//int o = 0;
//void find_all()
//{
//	int x = 0;
//	for(int i= 1;i <= 1000;i++)
//	{
//		for (int j = 1; j <1000; j++)
//		{
//			if (i > j && i % j == 0)
//			{
//				x += j;
//				
//			}
//		}
//		if (x == i)
//		{
//			a[o] = i;
//			o++;
//			x = 0;
//		}
//		else
//			x = 0;
//	}
//}
//int main()
//{
//	find_all();
//	for (int y = 0; y <= 1000; y++)
//	{
//		if (a[y])
//			printf("%d\n", a[y]);
//		else 
//			break;
//	}
//	return 0;
//}
//检测没有问题；