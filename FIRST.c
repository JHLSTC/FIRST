#include <stdio.h>
int main()
{   int i;
    printf("how old are you?");
    scanf("%d",&i);
    if (i >= 18)
    {
         printf("OLD MAN. PLEASE COME IN!");
    }
  if(i<18)
  {
      printf("GO AWAY.GUY,JUST YOU PLEASE GO HOME TO MEET YOU MOTHER.");
  }

    return 0;

}
