#include <stdio.h>
int main()
{
    int b;
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {

        int a;
        scanf("%d", &a);
        do
        {
            printf("%d ", a % 10);
            a /= 10;
        } while (a != 0);
        printf("\n");
    }

    return 0;
}