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
    for (int j = 0; j < a; j++)
    {
        if (arr[j] % 2 == 1)
        {
            b += 1;
        }
    }
    printf("%d", b);
    return 0;
}