#include <stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    int max = 0;
    for (int i = 0; i <= m; i++)
    {
        int a;
        scanf("%d", &a);
        if (max < a)
        {
            max = a;
        }
    }
    printf("%d", max);
    return 0;
}