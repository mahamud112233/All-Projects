#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        for(int i=1;i<=a;i++)
        {
            printf("%d ",i);
        }
    }
    else 
    {
        for(int j=a;j<=0;j++)
        {
            printf("%d ",j);
        }
    }
    return 0;
}