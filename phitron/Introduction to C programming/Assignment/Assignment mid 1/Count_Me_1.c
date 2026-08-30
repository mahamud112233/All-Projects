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
    int b=0,c=0;
    for(int j=0;j<a;j++)
    {
        if(arr[j]%2==0 && arr[j]%3==0)
        {
            b++;
        }
        else if(arr[j]%2==0)
        {
            b++;
        }
        else if(arr[j]%3==0)
        {
            c++;
        }
    }
    printf("%d %d",b,c);
    return 0;
}