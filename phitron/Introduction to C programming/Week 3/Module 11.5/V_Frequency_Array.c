#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    int arr[a];
    int brr[b+1];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    } 
    
    for(int i=0;i<= b;i++)
    {
        brr[i]=0;
    }
    for (int i = 0; i < a; i++)
    {
        int n = arr[i];
        brr[n]++;
    }
    for (int i = 1; i <=b; i++)
    {
        printf("%d\n", brr[i]);
    }
    return 0;
}