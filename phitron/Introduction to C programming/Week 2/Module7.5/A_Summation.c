#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    long long int b = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < a; j++)
    {
        b = b + arr[j];
    }
    if (b < 0)
    {
        printf("%lld", b*(-1));
    }
    else 
    {
        printf("%lld",b);
    }
    return 0;
}