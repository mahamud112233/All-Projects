#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b,c,d,e,f;
    b=a/365;
    c=a%365;
    d=c/30;
    e=c%30;
    printf("%d years\n%d months\n%d days",b,d,e);


    return 0;
}