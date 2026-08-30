#include<stdio.h>
int main()
{

int N;
scanf("%d",&N);
if(N==0)
{
    printf("Zero");
}
else if(N<0)
{
    printf("Impossible");
}
else 
{
    printf("Non Zero");
}


    return 0;
}