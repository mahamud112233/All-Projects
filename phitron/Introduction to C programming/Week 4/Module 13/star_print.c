#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a;
    for (int i=1;i<=a;i++)
    {
        for(int j=b;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
        b--;
    }
    return 0;
}