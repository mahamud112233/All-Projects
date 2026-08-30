#include<stdio.h>
void  odd_even()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int n=0,m=0;
    for (int i=0;i<a;i++)
    {
        if(arr[i]%2==0)
        {
            n++;
        }
        else if(arr[i]%2==1)
        {
            m++;
        }
    }
    printf("%d %d",n,m);
}
int main()
{
    odd_even();
    return 0;
}