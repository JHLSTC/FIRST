#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct Point
{
	char num;
	struct Point* next;
};
struct Point* top;
void push(char i)
{
	struct Point * a = (struct Point *)malloc(sizeof(struct Point));
	a->num = i;
	a->next =top ;
	top = a;
}
char POP(void)
{
	char num1 = top->num;
	struct Point* temp = top;
	top = top->next;
	free((void*)temp);
	return num1;
}
int IF_NUM(char CHOSE)
{
	if(CHOSE <= '9' && CHOSE >= '0')
		return 1;
	return 0;
}
int IF_CHAR(char CHOSE)
{
	if (CHOSE == '+' || CHOSE == '-' || CHOSE == '*' || CHOSE == '/')
		return 1;
	return 0;
}
char PLUS(char FIRST, char SECOND,char CHAR)
{
	switch (CHAR)
	{
	case '+':return FIRST + SECOND; break;
	case '-': return FIRST - SECOND; break;
	case '*': return FIRST * SECOND; break;
	case '/': return FIRST / SECOND;
	}
	return EOF;

}

int main()
{
	char num[50] = "1,1,+,2,+";
	for (int time = 0; time < strlen(num); time++)
	{
		if (num[time] == ' ' || num[time] == ',' || num[time] == '.')
			continue;
		else if (IF_NUM(num[time]))
		{
			int NEW = num[time] - '0';
			push((char)NEW);
		}
		else if (IF_CHAR(num[time]))
		{
			char pop2 = POP();
			char pop1 = POP();
			char ANSWER = PLUS(pop1, pop2,num[time]);
			push(ANSWER);
		}
	}
	printf("%d",(int) top ->num);
	return 0;
}
//stack的作用；幫助打印一組字符運算串;