#include <stdio.h>
#include<string.h>
int main()
{
    char a[1001], b[1001];
    scanf("%s %s", a, b);
    int lena = strlen(a);
    int lenb = strlen(b);
    int ab = 0, cd = 0;
    if (lena > lenb)
    {
        for (int i = 0; i < lena; i++)
        {
            if (a[i] == b[i])
            {
                continue;
            }
            else
            {
                ab = a[i];
                cd = b[i];
                break;
            }
        }
    }
    else if (lena < lenb)
    {
        for (int i = 0; i < lenb; i++)
        {
            if (a[i] == b[i])
            {
                continue;
            }
            else
            {
                ab = a[i];
                cd = b[i];
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < lenb; i++)
        {
            if (a[i] == b[i])
            {
                continue;
            }
            else
            {
                ab = a[i];
                cd = b[i];
                break;
            }
        }
    }
    if (ab - 96 < cd - 96)
    {
        printf("%s is smallest",a);
    }
    else if (ab - 96 == cd - 96)
    {
        printf("%s is equal to %s",a,b);
    }
    else
    {
        printf("%s is smalest]",b);
    }

    return 0;
}