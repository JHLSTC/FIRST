#include<malloc.h>
//struct A
//{
//	int a;
//	struct A* next;
//};
struct Point* head;
#include<stdio.h>
struct Point
{
	int math;
	struct Point* next;
};
void REview_the_f(struct Point* head1)
{
	if (head->next == NULL)
	{
		head = head1;
		return;
	}
	REview_the_f(head->next);
	head1->next->next = head1;
	head1->next = NULL;

}//���D����BY�f�w��
void Inster(int a, int b)
{
	struct Point * c =(struct Point *)malloc(sizeof(struct Point));
	c->math = a;
	c->next = NULL;
	if (b == 1)
	{
		c->next = head;
		head = c;
	
		return;
	}
	struct Point* temp1 = head;
	for (int i = 0; i < b - 2; i++)
	{
		temp1 = temp1->next;
	}
	c->next = temp1->next;
	temp1->next = c;
}
//struct A* head;
//int main()
//{
//
//	return 0;
//}
void P(void)
{
	struct Point* A = head;
	while (A != NULL)
	{
		printf("%d", A->math);
		A = A->next;
	}
}
/*void Print(struct Point* p)
{
	if (p == NULL) return;
	printf("%d",p->math);
	Print(p->next);
}�f�w���F printf*/
/*
���F�����ӡ
PRINTF -> PRINTF1 + PRINTF(THE ONE);

�f�w����ǰ���A�Ġ�B���F�ģ���������f�w���F��//ע���f�w�㷨�r�g�}�s�ȸ�->�������
�˳��f�wҪ����ֹͣ��һ�����еĺ�������
��ָ���EOF�ȶ��ǿ�ʹ��ֵ��
*/
void Inster1(int a)
{
	
	struct Point* temp = head;
	if (a == 1)
	{
		free((void*)temp->math);
		temp = temp->next;
		return;
	}
		for (int i = 0; i < a - 2; i++)
		{
			temp = temp->next;
		}
		temp->next = temp->next->next;
		free((void*)(temp->next->math));
		

}

void REVIEW(void)
{
	struct Point* past, * now, * furth;
	past = NULL;
	now = head;
	furth = head;
	while (now != NULL)
	{
		furth = now->next;
		now->next = past;
		past = now;
		now = furth;
	}
	head = past;
}
int main()
{
	Inster(5, 1);
	Inster(6, 2);
	Inster(7, 3);
	P();
	REVIEW();
	printf("\n");
	P();
	return 0;
}
//ָᘵ�������朽ӣ����Ɍ�朱���һ�l�Q��
//��춆΂����c�Ĳ��������Ȍ�����ȡ�ٌ����c�������_������
//����ֱ�ӿ������Δ��������ǆμ������֣�
//ѭ�h�ĳ�ʼ���x���ǽY���r�������Ġ�B��
//�h������������׃�r���������ڽ��������_�������@�ɂ�����
/*�r�g�}�s��->ѭ�͵������c���a���е�����
��������}�Δ����a�����}ʹ�õ����ʣ�
*
*���ʹ�Ô��е�ȥ����link list ����ʹ�����o���L�ڃ��棻�����������ڶ̣�
��ͺ͌��H�Ą����ڴ��ǲ�ͬ�ģ�
malloc ʹ�ú��ڴ��x��ε����x��
