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
    for (int i = 0; i < a; i++)
    {
        if (arr[b] < arr[i])
        {
            b = i;
        }
        if (arr[c] > arr[i])
        {
            c = i;
        }
    }
    int t = arr[b];
    arr[b] = arr[c];
    arr[c] = t;

    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}