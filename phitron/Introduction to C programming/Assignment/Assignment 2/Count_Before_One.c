#include<stdio.h>
int count_before_one(int arr[],int n)
{
    int b=n;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            b=i;
            break;
        }
    }
    return b;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a=count_before_one(arr,n);
    printf("%d",a);
    return 0;
}