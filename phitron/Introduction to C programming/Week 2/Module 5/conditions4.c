#include <stdio.h>
int main()
{
    int a;
    scanf("%c",&a);
    if (a >= '0' && a <= '9')
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (a >= 'A' && a <= 'Z')
        {
            printf("IS CAPITAL");
        }
        else
        {
            printf("IS SMALL");
        }
    }
    return 0;
}