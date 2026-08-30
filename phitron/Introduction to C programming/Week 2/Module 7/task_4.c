#include <stdio.h>
#include<limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int b=INT_MAX ;
    for (int j = 0; j < a; j++)
    {
        if (arr[j]<b)
        {
            b = arr[j];
        }
    }
    printf("%d", b);
    return 0;
}