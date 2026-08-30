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
        int count = 1;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (i == j)
                {
                    if (arr[i][j] != 1)
                    {
                        count = 0;
                    }
                }
                else
                {
                    if (i + j == a - 1)
                    {
                        if (arr[i][j] != 1)
                        {
                            count = 0;
                        }
                    }
                    else
                    {
                        if(arr[i][j]!=0)
                        {
                            count=0;
                        }
                    }
                }
            }
        }
        if (count == 1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}