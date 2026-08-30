#include<stdio.h>
void fun(int* p)
{
*p=20;
}
int main()
{
    int a=10;
    fun(&a);
    printf("%d",a);
    
    return 0;
}