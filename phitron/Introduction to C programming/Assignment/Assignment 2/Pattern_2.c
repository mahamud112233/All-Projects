#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a,c=1;
    for (int i=1;i<=a;i++)
    {
        for (int j=1;j<b;j++)
        {
            printf(" ");
        }b--;
        for(int j=c;j>0;j--)
        {
            printf("%d",j);
        }
        c++;
        printf("\n");
    }
    return 0;
}