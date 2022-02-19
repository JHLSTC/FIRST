#include<stdio.h>
#include<string.h>
//extern int AB;申明变量。
//const//常变量。
//enum{};枚举
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
int main()
{
    int a;
    int b;
    int* c = &a;
    int* d = &b;
 //struct man s ={"张三",20 ,203320287};
   //printf("%s %d %d",s.name,s.age,s.id);

  //struct man*i =&s;
  //printf("%s %d %d",(*i).name,(*i).age,(*i).id);
  //printf("%s %d %d",i->name,i->id,i->age);
  a = 10;
  b = 20;

  swap(c,d);
  printf(" a = %d   b = %d",a ,b);

    return  0;
}


