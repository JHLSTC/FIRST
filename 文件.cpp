#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	FILE* a = fopen("abc.txt", "w");//文件流->向文件写数据；
	if (a == NULL)
	{
		perror("abc.txt");
		return 1;
	}
	fclose(a);
	a = NULL;
	return 0;
//	文件（硬盘）
////字符本质上是ASCILL码值
}//流->在不同硬件与程序之间的一层虚拟层；FILE *类型
//将数据输入不同流后流会帮住读写与输出；
//stdin->默认打开默认入流；键盘
//stdout->标准输出流;>屏幕
//strerr->标准错误流;
//都是FILE *类型
//可以将屏幕看为文件；
//fgetc读取流并返回到内存(流)-
//fputc 输入到流（默认）并返回输入值；
//EOF-> - 1;
//三目操作符目前有
/*？ ： ；
qsort(char*, char*, fun*);
fgets(char *, num, stream);
struct 
	static
	//-> 表示地址时的分隔线*/