#include<stdio.h>
int my_abs(int a)
{
    if(a<0)
    {
        a=a*(-1);
    }
    else 
    {
        a=a;
    }
    return a;
}
int main()
{
    int a;
    scanf("%d",&a);
    int b=my_abs(a);
    printf("%d",b);
    return 0;
}