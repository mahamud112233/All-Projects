#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=5+(a/2);
    int c=1;
    for(int i=1;i<=6+(a/2);i++)
    {
        for(int j=b;j>0;j--)
        {
            printf(" ");
            
        }
        b--;
        for(int k=1;k<=c;k++)
        {
            printf("*");
        }
        c+=2;
        printf("\n");
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=a;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}