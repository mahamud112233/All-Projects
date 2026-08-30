#include<stdio.h>
long long int recur(long long int a)
{
  if(a==1)
  {
    return 0;
  }
return 1+recur(a/2);
}
int main()
{
   long long int a;
    scanf("%lld",&a);
    int b=recur(a);
    printf("%d",b);
    return 0;
}