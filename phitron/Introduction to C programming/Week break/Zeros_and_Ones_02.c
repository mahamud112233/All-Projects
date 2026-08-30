#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);

    for (int j = 1; j <= a; j++)
    {
        if (j == x)
        {
            if (arr[j] == 0)
            {
                printf("%d ", arr[j] + 1);
            }
            else 
            {
                printf("%d ",arr[j]-1);
            }
            
        }
        else 
        {
            printf("%d ",arr[j]);
        }
    }
    return 0;
}