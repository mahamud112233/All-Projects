#include<stdio.h>
void abc(int a,int i)
{
    if(i>a)
    {
        return;
    }
    printf("%d\n",i);
    abc(a,i+1);
}
int main()
{
    int a;
    scanf("%d",&a);
    abc(a,1);
    return 0;
}