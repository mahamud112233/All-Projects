#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a,c=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=c;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=b;k++)
        {
            printf("*");
        }
        printf("\n");
        c++;
        b=b-2;
    }
    return 0;
}