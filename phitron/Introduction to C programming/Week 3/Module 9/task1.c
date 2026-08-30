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
    int b;
    scanf("%d",&b);
    for(int j=b;j<a-1;j++)
    {
        arr[j]=arr[j+1];
    }
    for(int k=0;k<a-1;k++)
    {
    printf("%d ",arr[k]);
    }
    return 0;
}