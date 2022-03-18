#include<stdio.h>
void mun()
{
	printf("*****************************************\n");
	printf("************请选择***********************\n");
	printf("**1->' +'  2.-> '-'3. -> '*' 4. ->' /'***\n");
	printf("************5.BREAK**********************\n");


}
void mun1()
{
	printf("***************************************\n");
	printf("************请选择符号使用次数*********\n");
	printf("***************************************\n");
}
int ADD(int a, int b)
{

	return a + b ;
}
int MIN(int a, int b)
{
	return a - b;
}
int DO(int a, int b)
{
	return a * b;
}
int HU(int a, int b)
{
	return a / b;
}
int main()
{
	int r = 0;
	int j = 0;
	int k = 0;
	int (*sut[5])(int, int) = {
		NULL,ADD ,MIN ,DO ,HU
	};
	int i = 0;
	int q = 0;
	int u = 0;
	while (1) {
		mun();
		scanf_s("%d", &i);
		if (i == 5)
			break;
		mun1();
		scanf_s("%d", &r);
		scanf_s("%d %d", &j, &k);
		u = sut[i](j, k);
		while (r-- != 1)
		{
			scanf_s("%d", &q);
			u = sut[i](u, q);
		}
		printf("%d\n", u);
	}

	return 0;
	}