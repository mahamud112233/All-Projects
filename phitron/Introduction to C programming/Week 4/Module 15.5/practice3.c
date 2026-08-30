#include<stdio.h>
int count_odd(int arr[],int a)
{
    int odd=0;
    for (int i=0;i<a;i++)
    {
        if(arr[i]%2==1)
        odd++;
    }
    return odd;
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
    int b=count_odd(arr,a);
    printf("%d",b);
    return 0;
}