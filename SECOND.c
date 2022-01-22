#include <stdio.h>
 int main()
 {   int i;
     printf("分数：");
     scanf("%d",&i);
   if(i>=90 && i<=100)
   {
       if (i>=95)
       {
           printf("金色传说");
    }
       else {printf("传奇");}
 }

    else if(i>=80 && i<90)
{
    printf("王者你的剑就是我的剑");
}

else if (i<80 && i>=60)
{
    printf("革命尚未成功，同志还要努力");

}
  else  if(i<60)
    {
        printf("傻逼回家放牛吧，学你嘛呢");

    }
    else {printf("傻儿子咋还逃出来了呢，字都不会打了吗");}



     return 0;
}
