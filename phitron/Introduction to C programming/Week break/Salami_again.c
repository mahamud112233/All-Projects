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
    int b=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]>b)
        {
            b=arr[i];
        }
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",b-arr[i]);
    }
    return 0;
}