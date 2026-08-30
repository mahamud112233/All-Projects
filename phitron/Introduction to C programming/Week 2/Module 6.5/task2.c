#include <stdio.h>
int main()
{
    int a;
    char ch = 'A';
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {

        for (int b = 1; b <= i; b++)
        {

            printf("%c ", ch);
           
        }
        printf("\n");
         ch++;
    }
    return 0;
}