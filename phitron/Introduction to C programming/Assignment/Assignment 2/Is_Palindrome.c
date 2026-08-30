#include <stdio.h>
#include <string.h>
int is_palindrome(char str[])
{
    int a = 0;
    int len = strlen(str);
    for (int i = 0, j = len - 1; i <= len / 2; i++, j--)
    {
        if (str[i] == str[j])
        {
            a = 1;
        }
        else
        {
            a = 0;
            break;
        }
    }

    return a;
}

int main()
{
    char str[1001];
    scanf("%s", str);
    int a = is_palindrome(str);
    if (a == 1)
    {
        printf("Palindrome");
    }
    else if (a == 0)
    {
        printf("Not Palindrome");
    }

    return 0;
}