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
        int scalar = 0;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (i == j)
                {
                    if (arr[i][j] != 0)
                    {
                        if (arr[i][j] == arr[0][0])
                        {
                            scalar++;
                        }
                    }
                }
                else
                {
                    if(arr[i][j]!=0)
                    {
                        scalar=a*a*a;
                    }
                }
            }
        }
        if (scalar == a)
        {
            printf("This is a scalar matrix");
        }
        else
        {
            printf("This is not a scalar matrix");
        }
    }
    else
    {
        printf("This is not a scalar matrix");
    }
    return 0;
}