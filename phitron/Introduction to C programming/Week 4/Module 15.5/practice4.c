#include<stdio.h>
void change_it(int arr[],int a)
{
    *(arr+(a-1))=100;
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
    change_it(arr,a);
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}