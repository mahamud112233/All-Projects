#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if (a == b)
    {
        int unit = 0;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (i == j)
                {
                    if (arr[i][j] == 1)
                    {
                        unit++;
                    }
                }else
                {
                    if(arr[i][j]!=0)
                    {
                        unit=a*a*a;
                    }
                }
            }
        }
        if (unit == a)
        {
            printf("This is a unit matrix");
        }
        else
        {
            printf("This is not a unit matrix");
        }
    }
    else
    {
        printf("This is not a unit matrix");
    }
    return 0;
}