#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001], b[1001];
    scanf("%s %s", a, b);
    int lenb = strlen(b);
    for (int i = 0; i <= lenb; i++)
    {
        a[i] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}