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
//	//����
//	//������ͬ�������һ����λ��
//	//��ǰ��������ͬ
//	//��λ��Ϊĳ������ƽ��
//	int c = cheak();
//	printf("%d", c);
//	return 0;
//}
//�޸Ĳ����Ż�
//1.ռ�ÿռ�̫��
//2.ѭ�����ࣻ
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
	//����
	//������ͬ�������һ����λ��
	//��ǰ��������ͬ
	//��λ��Ϊĳ������ƽ��
	int c = cheak();
	printf("%d", c);
	return 0;
}