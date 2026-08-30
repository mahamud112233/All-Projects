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
    int i=0;
    int j=a-1;
    while(i<j)
    {
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;
        j--;
    }
    for(int k=0;k<a;k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}