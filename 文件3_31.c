
#define _CRT_SECURE_NO_WARNINGS
struct a
{
	char b[10];
	int c;
	float d;
};
#include<stdio.h>
#include<malloc.h>
//int main()
//{
//     char l = '5';
//	struct a v = { "abcdef",40,5.555,&l};
//	/*FILE * q = fopen("text.txt","w");
//	if (q == NULL)
//	{
//		perror(":");
//	}
//	fprintf(q,"%s %d %f", v.b, v.c, v.d);
//	fclose(q);
//	q = NULL;*/
//	printf("%x %x %x %x %x", v.b, v.e, &v ,v.c,&l);//�Զ������������Ϊ�������ַ��
//	�Զ������ָ��Ϊָ�����ݣ�
//	return 0;
//}
  //-�������������//�ļ��Ĵ���رգ�
//����Ҫ���ڴ��д洢��
int main()
{
	struct a v = {0};
	FILE* b = fopen("C:\\Users\\������\\Desktop\\my program\\Project3\\Project3\\text.txt", "r");
	fscanf(b, "%s %d %f", v.b, &(v.c), &(v.d));
	printf("%s %d %f", v.b, v.c, v.d);
	fclose(b);
	return 0;
}
ASCILL��ֵ