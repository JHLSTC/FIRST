#include<stdio.h>
#include<string.h>
//extern int AB;����������
//const//��������
//enum{};ö��
//strcpy(a,b)����a�ĵ�ַ
int Add(int x,int y,int z)
{
    int m =0;
    m = x + y;
    return m;
}
struct man
{
    char name[20];
    int age;
    char id[30];

};
void  swap(int* x,int* y)
{
    int z = *x ;
    *x = *y;
    *y = z;



}
void AdD(int*p)//�ӷ�
{
    (*p)++;
}
int STrLeN(char*d)//�󳤶�
{
        if(*d != '\0')
        {
            return 1+STrLeN(d+1);
        }
        else
            return 0;
    }
int fei(int n)//��Ч��
    {
        if(n !=2 && n !=1)
        {
            return fei(n-1)+fei(n-2);
        }
        else return 1;
    }
int j(int n)//n�Ľ׳�
{
    if(n != 0)
    {
      return  n *j(n - 1);
    }
    else
      return 1;
}
int k(int m)
{
    int a=1;
    int b=1;
    int c;
    if(m==1 / m==2)
    {
        return 1;
    }
   else{ while(m-2 !=0)
    {
        c = a+b;
        a =b;
        b = c;
        m--;
    }
    return c;}
}
int main()
{
    int a;
    int b;
    int* c = &a;
    int* d = &b;
 //struct man s ={"����",20 ,203320287};
   //printf("%s %d %d",s.name,s.age,s.id);

  //struct man*i =&s;
  //printf("%s %d %d",(*i).name,(*i).age,(*i).id);
  //printf("%s %d %d",i->name,i->id,i->age);
  a = 10;
  b = 20;
  int num[5][5] = {0};
  int *p = num;
for(a=0;a<12;a++)
{


 printf("%d",*p);
 *p++;
}
    return  0;
}


