#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b=a-1,c=1;
    for (int i = 1; i <=a; i++)
    {
      for(int j=1;j<=b;j++)
      {
        printf(" ");
      }
      b--;
      for(int k= 1;k<=c ;k+=1)
      {
        printf("*");
      }
      c+=2;
        printf("\n");
    }
    int d=0,s=a*2;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=d;j++)
        {
            printf(" ");
        }
        d++;
        for (int k=1;k<s;k++)
        {
            printf("*");
        }
        printf("\n");
        s-=2;

    }
    return 0;
}