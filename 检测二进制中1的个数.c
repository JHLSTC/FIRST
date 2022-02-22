#include<stdio.h>
int main()
{
   unsigned int a=23;
    int b =1;
    int c=0;
    int d=0;
    int e =a;

   for(int i=0;i<=31;i++)
    {
        c =b &a ;
        a=a >> 1;
        if(c==1)
            {d++;}
    }

    printf("%d",d);


    return 0;
}
