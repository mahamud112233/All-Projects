#include <stdio.h>
#include <string.h>
int main()
{
    char a[21], b[21];
    scanf("%s %s", a, b);
    int c = strcmp(a, b);
    if (c < 0)
    {
        printf("%s", a);
    }
    else if (c == 0)
    {
        printf("%s", a);
    }
    else
    {
        printf("%s", b);
    }
    return 0;
}