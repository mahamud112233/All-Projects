#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i=a;i>=1;i--)
    {
        for (int b=i;b>=1;b--)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}