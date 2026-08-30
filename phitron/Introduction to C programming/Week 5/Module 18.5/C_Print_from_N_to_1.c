#include<stdio.h>
void back(int b,int i)
{
    if(i>b)
    {
        return;
    }
    back(b,i+1);
    printf("%d",i);
    if(i>1)
    {
        printf(" ");
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    back(b,1);
    return 0;
}