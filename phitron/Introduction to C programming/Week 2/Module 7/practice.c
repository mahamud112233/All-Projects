#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
        
    }
    for (int j = 0; j < a; j++)
    {
        printf("%d\n", ar[j]);
        
    }

    return 0;
}