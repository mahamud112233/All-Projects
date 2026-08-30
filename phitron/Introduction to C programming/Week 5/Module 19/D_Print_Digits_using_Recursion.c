#include<stdio.h>
void recur(int b)
{
    if(b==0)
    {
        return;
    }
    recur(b/10);
    int value=b%10;
    printf("%d ",value);
}
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        int b;
        scanf("%d",&b);
        if(b==0)
        {
            printf("0");
        }
        recur(b);
        if(a!=1)
        {
            printf("\n");
        }
    }
    return 0;
}