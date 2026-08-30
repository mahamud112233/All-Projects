#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-2;i++)
    {
        if(arr[i]+arr[i+2]<arr[i+1])
        {
            arr[i+1]=arr[i]/2;
        }
    }
    for(int i=0;i<a;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}