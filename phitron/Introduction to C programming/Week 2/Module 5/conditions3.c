#include<stdio.h>
int main()
{
    int a;
    scanf("%c",&a);
    if (a>='a' && a<='z')
    {
        int b=a-32;
        printf("%c",b);
    }
    else 
    {
        int B=a+32;
        printf("%c",B);
    }
    return 0;
}