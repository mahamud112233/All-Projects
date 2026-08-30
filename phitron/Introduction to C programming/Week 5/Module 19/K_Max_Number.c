#include<stdio.h>
#include<limits.h>
int recur(int arr[],int a,int i)
{
    if(i==a)
    {
        return INT_MIN;
    }
    int find=recur(arr,a,i+1);
    if (arr[i]>find)
    {
        return arr[i];
    }
    else 
    {
        return find;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=recur(arr,a,0);
    printf("%d",max);
    return 0;
}