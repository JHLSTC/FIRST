#include <stdio.h>

int main()
{
    int Q;
    printf("你是不是傻逼？\n");
    scanf("%d",&Q);
    switch(Q)
    {
        case 1:printf("挺有自知之明的啊。\n");break;
        case 2:printf("傻儿子啊，这么不懂事。\n");break;
        default:{printf("再输入一次");
                  for(Q=0;Q==1;)
                  {
                      printf("再输入一次");
                      scanf("%d",&Q);
     switch(Q)
    {
        case 1:printf("挺有自知之明的啊。\n");break;
        case 2:printf("傻儿子啊，这么不懂事。\n");break;

                  }
                  }
        }
    }
    return 0;
}
