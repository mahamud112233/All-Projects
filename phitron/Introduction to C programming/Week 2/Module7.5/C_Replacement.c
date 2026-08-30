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
    for (int j = 0; j < a; j++)
    {
        if (arr[j] > 0)
        {
            printf("1 ");
        }
        else if (arr[j] == 0)
        {
            printf("0 ");
        }
        else
        {
            printf("2 ");
        }
    }
    return 0;
}