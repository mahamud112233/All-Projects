#include <stdio.h>
char small_to_capital(char a)
{ char w;
    if (a >= 'a' && a <= 'z')
    {
         w = a - 32;
    }
    return w;
}
int main()
{
    char a;
    scanf("%c", &a);
    char b = small_to_capital(a);
    printf("%c", b);
    return 0;
}