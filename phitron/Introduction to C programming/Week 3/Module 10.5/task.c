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
    int brr[b];
    for(int i=0;i<b;i++)
    {
        scanf("%d",&brr[i]);
    }
    int crr[a+b];
    for(int i=0;i<a;i++)
    {
       crr[i]=arr[i];
    }
    for (int j=0;j<b;j++)
    {
        crr[j+a]=brr[j];
    }
    for (int i=0;i<a+b;i++)
    {
        printf("%d ",crr[i]);
    }


    return 0;
}