#include <stdio.h>
 int main()
 {   int i;
     printf("������");
     scanf("%d",&i);
   if(i>=90 && i<=100)
   {
       if (i>=95)
       {
           printf("��ɫ��˵");
    }
       else {printf("����");}
 }

    else if(i>=80 && i<90)
{
    printf("������Ľ������ҵĽ�");
}

else if (i<80 && i>=60)
{
    printf("������δ�ɹ���ͬ־��ҪŬ��");

}
  else  if(i<60)
    {
        printf("ɵ�ƻؼҷ�ţ�ɣ�ѧ������");

    }
    else {printf("ɵ����զ���ӳ������أ��ֶ����������");}



     return 0;
}
