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

}//反轉函數BY遞歸；
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
}遞歸實現 printf*/
/*
實現反向打印
PRINTF -> PRINTF1 + PRINTF(THE ONE);

遞歸是先前基礎的狀態下實現的；那麽可用遞歸實現；//注：遞歸算法時間複雜度高->棧溢出；
退出遞歸要的是停止下一個執行的函數即可
空指針于EOF等都是可使用值；
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
//指針的作用是鏈接，及可將鏈表看爲一條綫；
//對於單個節點的操作，可先將其提取再將其與其他分開操作；
//可以直接看操作次數；而不是單純看數字；
//循環的初始定義就是結束時各個數的狀態；
//黨綁定數操作改變時，應將數于綁定數分開；獨立這兩個數；
/*時間複雜度->循復的增加與代碼執行的增加
及最大重複次數代碼的重複使用的增率；
*
*如果使用數列等去創造link list ；會使數據無法長期儲存；數據生命周期短；
類型和實際的創建内存是不同的；
malloc 使用后將内存賦予段的意義；
