#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	FILE* a = fopen("abc.txt", "w");//�ļ���->���ļ�д���ݣ�
	if (a == NULL)
	{
		perror("abc.txt");
		return 1;
	}
	fclose(a);
	a = NULL;
	return 0;
//	�ļ���Ӳ�̣�
////�ַ���������ASCILL��ֵ
}//��->�ڲ�ͬӲ�������֮���һ������㣻FILE *����
//���������벻ͬ���������ס��д�������
//stdin->Ĭ�ϴ�Ĭ������������
//stdout->��׼�����;>��Ļ
//strerr->��׼������;
//����FILE *����
//���Խ���Ļ��Ϊ�ļ���
//fgetc��ȡ�������ص��ڴ�(��)-
//fputc ���뵽����Ĭ�ϣ�����������ֵ��
//EOF-> - 1;
//��Ŀ������Ŀǰ��
/*�� �� ��
qsort(char*, char*, fun*);
fgets(char *, num, stream);
struct 
	static
	//-> ��ʾ��ַʱ�ķָ���*/