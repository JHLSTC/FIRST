//������
#include<stdio.h>
#include "game.h"

void game()
{
    char k = 'c';
    char i[row][swh];
    qingkong(i,row,swh);
    display(i,row,swh);
    while(1)
    {
        PLAYER(i,row,swh);
        display(i,row,swh);
     k =WIN(i,row,swh);
     if(k !='c')
         break;
        COMPUTER(i,row,swh);
        display(i,row,swh);
       k =WIN(i,row,swh);
       if(k!='c')
           break;
    }
 if(k=='*')
       {
           printf("YPU WIN\n");

       }
     else if(k=='#')
       {
           printf("YOU LOSE\n");

       }
     else if(k=='Q')
       {
           printf("ƽ��\n");

       }
}



void meun()
{
    printf("*******************************\n");
    printf("********    PLAY(1)  **********\n");
    printf("********    EXIT(0)  **********\n");
    printf("*******************************\n");
}
int main()
{
    int intput=0;
    srand((unsigned int)time(NULL));

    do
    {
        meun();
        printf("��ѡ��");
        scanf("%d",&intput);

        switch(intput)
        {
            case 1:game();break;
            case 0:printf("�˳���Ϸ");break;
            default:printf("����\n");break;
        }



    }while(intput);





return 0;
}
