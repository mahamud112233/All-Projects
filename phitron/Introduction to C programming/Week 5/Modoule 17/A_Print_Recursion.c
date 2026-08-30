#include<stdio.h>
void recursion(int b,int a)
{
if(b==a+1)
{
return;
}
printf("I love Recursion\n");
recursion(b+1,a);
}
int main()
{
    int a;
    scanf("%d",&a);
    recursion(1,a);
    return 0;
}