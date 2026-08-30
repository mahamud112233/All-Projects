#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    int b;
    int c = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &b);
    for (int j = 0; j < a; j++)
    {
        if (b == arr[j])
        {
            printf("%d", j);
            break;
        }
        else
        {
            c = c + 1;
        }
    }
    if (c == a)
    {
        printf("-1");
    }
    return 0;
}