#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i = a - 1,s=1; i > 0; i--,s++)
    {
        for (int f = 1; f <= s; f++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {

            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}