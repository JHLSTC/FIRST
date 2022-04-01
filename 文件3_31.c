
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
//	printf("%x %x %x %x %x", v.b, v.e, &v ,v.c,&l);//自定义访问数组名为其自身地址；
//	自定义访问指针为指针内容；
//	return 0;
//}
  //-》流的输入输出//文件的打开与关闭；
//读入要在内存中存储‘
int main()
{
	struct a v = {0};
	FILE* b = fopen("C:\\Users\\蒋鹤立\\Desktop\\my program\\Project3\\Project3\\text.txt", "r");
	fscanf(b, "%s %d %f", v.b, &(v.c), &(v.d));
	printf("%s %d %f", v.b, v.c, v.d);
	fclose(b);
	return 0;
}
ASCILL码值