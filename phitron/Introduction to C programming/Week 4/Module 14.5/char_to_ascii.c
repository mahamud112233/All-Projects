#include<stdio.h>
int char_to_ascii(char a)
{
int b=a;
return b; 
}
int main()
{
    char a;
    scanf("%c",&a);
    int c=char_to_ascii(a);
    printf("%d",c);
    return 0;
}