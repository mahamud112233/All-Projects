#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a + 1];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ind, val;
    scanf("%d %d", &ind, &val);
    for (int i = a; i > ind; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[ind]=val;
    for (int k = 0; k <= a; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}