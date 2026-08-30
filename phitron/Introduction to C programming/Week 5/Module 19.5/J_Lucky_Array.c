#include<stdio.h>
#include<limits.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b=INT_MAX;
    for(int i=0;i<a;i++)
    {
        if(arr[i]<b)
        {
            b=arr[i];
        }
    }
    int c=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]==b)
        {
            c++;
        }
    }
    if(c%2==1)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }
    return 0;
}