#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    scanf("%s", str);
    int len = strlen(str);
    int a = len;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a')
        {
            a--;
        }
        else if(str[i]=='e')
        {
            a--;
        }
        else if(str[i]=='i')
        {
            a--;
        }
        else if(str[i]=='o')
        {
            a--;
        }
        else if(str[i]=='u')
        {
            a--;
        }
    }
    printf("%d", a);

    return 0;
}