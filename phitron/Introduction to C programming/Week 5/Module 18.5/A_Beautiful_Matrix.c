#include<stdio.h>
int main()
{
    int a=5,b=5;
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int c=0,d=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(arr[i][j]==1)
            {
                c=i+1;
                d=j+1;
            }
        }
    }
    int sum1=3-c;
    if(sum1<0)
    {
        sum1=sum1*(-1);
    }
    int sum2=3-d;
    if(sum2<0)
    {
        sum2=sum2*(-1);
    }
    int steps=sum1+sum2;
    printf("%d",steps);

    return 0;
}