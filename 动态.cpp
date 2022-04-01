#include<stdio.h>
#include<malloc.h>
int main()
{
	int* a =(int *) calloc(10, 4);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", *(a + i));
	}
	a = realloc(a, 20 * sizeof(int));
	return 0;
}