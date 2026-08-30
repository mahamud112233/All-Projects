#include <stdio.h>
char capital_to_small(char a)

    {char t;
    if (a >= 'A' && a <= 'Z')
    {
        t= a + 32;
    }
    return t;
}
int main()
{
    char a;
    scanf("%c", &a);
    char b = capital_to_small(a);
    printf("%c", b);
    return 0;
}