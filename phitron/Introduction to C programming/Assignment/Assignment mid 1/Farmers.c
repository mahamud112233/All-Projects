#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int b, c, d;
        scanf("%d %d %d", &b, &c, &d);
        int x = 0;
        x = d - ((d * b) / (b + c));
        printf("%d\n", x);
    }
    return 0;
}