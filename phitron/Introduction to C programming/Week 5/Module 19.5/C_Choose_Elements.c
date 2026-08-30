#include<stdio.h>
#include<limits.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]<arr[j])
            {
                int x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
            }
        }
    }
    long long int sum=0;
    for(int i=0;i<b;i++)
    {
        if(arr[i]>=0)
        {
            sum=sum+arr[i];
        }
    }
    printf("%lld",sum);
    return 0;
}