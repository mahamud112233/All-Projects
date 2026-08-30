#include <stdio.h>
#include<limits.h>
void minmax(int arr[], int a)
{
 int max=INT_MIN;
 for(int i=0;i<a;i++)
 {
    if(arr[i]>max)
    {
        max=arr[i];
    }
 }
 int min=INT_MAX;
 for(int i=0;i<a;i++)
 {
    if(arr[i]<min)
    {
        min=arr[i];
    }
 }
 printf("%d %d",min,max);
}
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    minmax(arr, a);
    return 0;
}