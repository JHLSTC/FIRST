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
//��ά���鴫�� char (* a)[]
//  sizeof()��������Ŀռ��С
//strlen()���/0��
//һ������
//int (*p)(int, int) = &Add;//����ָ��Ķ���

//void (*p)(char*) = &test;
//����ָ������ƱȽϿ��ɣ�
//���ۼ���Ӧ�ö���ࣻ
//����������ָ���ࣻ
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