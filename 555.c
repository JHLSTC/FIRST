#include<stdio.h>
int main(){

 //指针》》地址索引
 //指针变量》》地址
//’&‘取其地址。*调用，即取值。
int i =2;
int a = 2;
    int*b;//定义一个整形指针
    b = &a;//给指针赋值，使指针指向a的地址
    printf("%d", b);//输出的是a的地址
    printf("\n");//换行符
    printf("%d", *b);//*的作用是解引用，取出指针指向地址的内容，达到简

    return  0;
}


