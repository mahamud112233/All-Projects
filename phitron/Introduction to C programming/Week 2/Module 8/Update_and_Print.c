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
    int x, v;
    scanf("%d %d", &x, &v);
    for (int j = a - 1; j >= 0; j--)
    {
        if (j == x)
        {
            printf("%d ", v);
        }
        else
        {
            printf("%d ", arr[j]);
        }
    }
    return 0;
}