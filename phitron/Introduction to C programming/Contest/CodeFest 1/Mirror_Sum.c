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
    int brr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&brr[i]);
    }
    for(int j=0,k=a-1;j<a;j++,k--)
    {
        arr[j]=arr[j]+brr[k];
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}