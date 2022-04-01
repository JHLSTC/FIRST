#include<stdio.h>
#include"ÉùÃ÷.h"
void menu()
{
	printf("******************************************\n");
	printf("********1.ADD    2.DLED*******************\n");
	printf("******3.CHECK  4.CHANGE * ****************\n");
	printf("*******5.SORT   6.PRINT * ****************\n");
	printf("********7.LOAD     8.SAVE*****************\n");
	printf("***********0.BREAK * *********************\n");
	printf("******************************************\n");

}
enum fun
{
	BREAK,
    ADD,
	DLED,
	CHECK,
	CHANGE,
	SORT,
	PRINT,
	LOAD,
	SAVE

};
int main()
{
	int i;
	con co;
	while (1)
	{
		menu();
		scanf_s("%d", &i);
		InitContact(&co);
		switch (i) {
		case ADD:add(&co); break;
		case DLED:dled(&co); break;
		case CHECK:check(&co); break;
		case CHANGE:change(&co); break;
		case PRINT:print(&co); break;
		case BREAK:EXIT(&co); break;
		case LOAD: load(&co); break;
		case SAVE:save(&co); break;
		}
	}
	return 0;
}
//realloc;
//free;