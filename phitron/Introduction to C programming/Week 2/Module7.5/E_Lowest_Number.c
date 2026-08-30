#include <stdio.h>
#include<limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    int b=INT_MAX;
    int c=1;
    
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    } 
    for(int j=0;j<a; j++)
    {
        if(b>arr[j])
        {
            b=arr[j];
            c=1+j;
        }
    }
    printf("%d %d",b,c);
    
    return 0;
}