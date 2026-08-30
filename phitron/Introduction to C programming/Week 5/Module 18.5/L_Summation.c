#include<stdio.h>
long long int recur(int arr[],int a,int i)
{
    if(i==a)
    {
        return 0;
    }
    long long int add=recur(arr,a,i+1);
    return add+arr[i];
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
    long long int ans=recur(arr,a,0);
    printf("%lld",ans);
    return 0;
}