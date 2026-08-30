#include <stdio.h>
int main()
{
    int a, b;
    char c;
    scanf("%c %d %d", &c, &a, &b);
    switch (c)
    {
    case '+':
        printf("%d %c %d", a, c, b);
        break;
    case '-':
        printf("%d %c %d", a, c, b);
        break;
    case '*':
        printf("%d %c %d", a, c, b);
        break;
    case '%':
        printf("%d %c %d", a, c, b);
        break;
    default:
        printf("Invalid operator");
        break;
    }

    return 0;
}