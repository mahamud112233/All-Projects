#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int b = 0;
    int c = 0;
    for (int j = 0; j < a; j++)
    {
        if (arr[j] > 0)
        {
            b = b + arr[j];
        }
        else
        {
            c = c + arr[j];
        }
    }
    printf("%d %d", b, c);
    return 0;
}