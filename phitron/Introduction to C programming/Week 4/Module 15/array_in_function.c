#include<stdio.h>
void fun(int a[],int n)//formate for array:data type + array name[],normal variable value pass: data type + name.
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
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
    fun(arr,a);// array and array size pass
    return 0;
}