#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    char s;
    scanf("%d %c %d", &a, &s, &b);
    int e, f, g, h;
    e = a + b;
    f = a - b;
    g = a * b;
    h = a / b;

    if (s=='+')
    {
        printf("%d", e);
    }
    else if (s=='-')
    {
        printf("%d", f);
    }
    else if (s=='*')
    {
        printf("%d", g);
    }
    else if (s=='/')
    {
        printf("%d", h);
    }
    return 0;
}