#include <stdio.h>
int main()
{
    int a;
    int b=1;
    scanf("%d", &a);
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            b=0;
            break;
        }
    }
   if (b==1)
   {
    printf("YES");
   }
   else
   {
    printf("NO");
   }

    return 0;
}