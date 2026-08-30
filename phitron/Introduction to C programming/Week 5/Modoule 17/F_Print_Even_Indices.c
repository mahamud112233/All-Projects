#include<stdio.h>
void re(int arr[],int a,int i)
{
    if(i>=a)
    {
        return;
    }
    re(arr,a,i+1);
    if(i%2==0)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    re(arr,a,0);
    return 0;
}