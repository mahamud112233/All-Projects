#include<stdio.h>
void re(int i,int a)
{
    if(i>a)
    {
        return;
    }
printf("%d\n",i);
re(i+1,a);
}
int main()
{
    int a;
    scanf("%d",&a);
    re(1,a);
    return 0;
}