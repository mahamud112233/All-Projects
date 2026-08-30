#include<stdio.h>
int main(){
long long int a;
scanf("%lld",&a);
int b;
scanf("%d",&b);
if(a%b==0||b%a==0)
{
    printf("Yes");
}
else
{
    printf("No");
}
    return 0;
}