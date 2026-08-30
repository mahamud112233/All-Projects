#include<stdio.h>
#include<string.h>
void fun(char arr[])//string length ber korar function ace.. tai size ta na bolle o hoy.
{
    printf("%s\n",arr);
    printf("%d",strlen(arr));
}
int main()
{
    int a;
    scanf("%d",&a);
    char arr[a];
    scanf("%s",arr);
    fun(arr);
    return 0;
}