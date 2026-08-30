#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 1000)
    {
        printf("Three Kacchi");
    }
    else if (1000 > a && a >= 500)
    {
        printf("One Large Pizza");
    }
    else if (500 > a && a >= 250)
    {
        printf("Three Small Burger");
    }
    else if (250 > a && a >= 100)
    {
        printf("Three Fuchka");
    }
    else
    {
        printf("Nothing");
    }
    return 0;
}