#include <stdio.h>
void fun(int arr[],int a)
{
    int index = 0;
    int b=0;
    for (int i = 0; i < a; i++)
    {
        if(arr[i]!=0)
        {
            arr[index]=arr[i];
            index++;
        }
        else
        {
            b++;
        }
    }
    
    for(int i=a-1,j=0;j<b;j++,i--)
    {
        arr[i]=0;
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    fun(arr,a);
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}