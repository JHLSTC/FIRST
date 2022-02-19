#include<stdio.h>
int main()
{
    char i[10] = "我是";
    char j[] ="小可爱";

    strcat(i,j);
    printf("%s",i);
    return  0;
}
