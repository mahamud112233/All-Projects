#include <stdio.h>
void re(int a)
{
    if (a == 0)
    {
        return;
    }
    
    printf("%d", a);
    if(a!=1)
    {
        printf(" ");
    }
    re(a - 1);
}
int main()
{
    int a;
    scanf("%d", &a);
    re(a);
    return 0;
}