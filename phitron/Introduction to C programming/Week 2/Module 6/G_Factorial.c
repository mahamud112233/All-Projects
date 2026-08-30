#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        long long int b=1;
        scanf("%d", &a);
        for (int j = 1; j <= a; j++)
        {
            b *= j;
        }
        printf("%lld\n", b);
    }
    return 0;
}