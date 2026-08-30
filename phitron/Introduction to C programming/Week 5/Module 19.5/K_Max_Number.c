#include<stdio.h>
#include<limits.h>
int recur(int arr[],int a,int i)
{
    if(i==a)
    {
        return INT_MIN;
    }
    int c=recur(arr,a,i+1);
    if(arr[i]>c)
    {
        return arr[i];
    }
    else
    {
        return c;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b=recur(arr,a,0);
    printf("%d",b);
    return 0;
}