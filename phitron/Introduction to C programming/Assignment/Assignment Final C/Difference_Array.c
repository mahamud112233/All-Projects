#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int e = 1; e <= t; e++)
    {
        int a;
        scanf("%d", &a);
        int arr[a];
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &arr[j]);
        }
        int brr[a];
        for (int j = 0; j < a; j++)
        {
            brr[j] = arr[j];
        }

        for (int j = 0; j < a; j++)
        {
            for (int k = j + 1; k < a; k++)
            {
                if (brr[j] > brr[k])
                {
                    int x = brr[j];
                    brr[j] = brr[k];
                    brr[k] = x;
                }
            }
        }

        int crr[a];
        for (int i = 0; i < a; i++)
        {
            crr[i] = arr[i] - brr[i];
        }
        for (int i = 0; i < a; i++)
        {
            if (crr[i] < 0)
            {
                printf("%d ", crr[i] * (-1));
            }
            else
            {
                printf("%d ", crr[i]);
            }
        }
        printf("\n");
    }
    return 0;
}