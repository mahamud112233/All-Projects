#include<stdio.h>
int my_len(char str[])
{
    int b=0;
    for(int i=0;i<10000000;i++)
    {
        if(str[i]=='\0')
        {
            b=i;
            break;
        }
    }
    return b;
}
int main()
{
    char str[10000001];
    scanf("%s",str);
    int a=my_len(str);
    printf("%d",a);
    return 0;
}