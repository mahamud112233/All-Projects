#include <stdio.h>
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        char str[10001];
        scanf("%s", str);
        int len = strlen(str);
        int b = 0, c = 0, d = 0;
        for (int j = 0; j < len; j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                b++;
            }
            else if (str[j] >= 'a' && str[j] <= 'z')
            {
                c++;
            }
            else if (str[j] >= '0' && str[j] <= '9')
            {
                d++;
            }
        }
        printf("%d %d %d\n",b,c,d);
    }

    return 0;
}