#include<stdio.h>
int main()
{
    char i[10] = "����";
    char j[] ="С�ɰ�";

    strcat(i,j);
    printf("%s",i);
    return  0;
}
