#include <stdio.h>

int main()
{
    int Q;
    printf("���ǲ���ɵ�ƣ�\n");
    scanf("%d",&Q);
    switch(Q)
    {
        case 1:printf("ͦ����֪֮���İ���\n");break;
        case 2:printf("ɵ���Ӱ�����ô�����¡�\n");break;
        default:{printf("������һ��");
                  for(Q=0;Q==1;)
                  {
                      printf("������һ��");
                      scanf("%d",&Q);
     switch(Q)
    {
        case 1:printf("ͦ����֪֮���İ���\n");break;
        case 2:printf("ɵ���Ӱ�����ô�����¡�\n");break;

                  }
                  }
        }
    }
    return 0;
}
