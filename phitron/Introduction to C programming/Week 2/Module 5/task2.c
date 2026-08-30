#include <stdio.h>
#include <string.h>
int main()
{
    char a1[50], b1[50];
    char a2[50], b2[50];
    scanf("%s %s", &a1, &b1);
    scanf("%s %s", &a2, &b2);

    if (strcmp(b1, b2) == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }

    ;
    return 0;
}