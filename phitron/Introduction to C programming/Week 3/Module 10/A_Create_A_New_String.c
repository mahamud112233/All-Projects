#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1001];
    scanf("%s",arr);
    char a[1001];
    scanf("%s",a);
    printf("%d %d\n",strlen(arr),strlen(a));
    printf("%s %s",arr,a);

    return 0;
}