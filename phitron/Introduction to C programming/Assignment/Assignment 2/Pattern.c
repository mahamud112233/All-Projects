#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b = 1, c = a - 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = c; j > 0; j--)
        {
            printf(" ");
        }
        c--;
        if (i % 2 == 1)
        {
            for (int j = 0; j < b; j++)
            {
                printf("#");
            }
        }
        else if (i % 2 == 0)
        {
            for (int j = 0; j < b; j++)
            {
                printf("-");
            }
        }

        b += 2;
        printf("\n");
    }


    int d = 1, e = a * 2 - 2;
    for (int i =a+1; i <a*2; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            printf(" ");
        }
        d++;
        if (i % 2 == 1)
        {
            for (int j = 1; j < e; j++)
            {
                printf("#");
            }
        }
        else if (i % 2 == 0)
        {
            for (int j = 1; j < e; j++)
            {
                printf("-");
            }
        }
        e -= 2;
        printf("\n");
    }

    return 0;
}