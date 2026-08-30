#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    char arr[a];
    scanf("%s", arr);
    int b = 0;
    for (int i = 0; i < a; i++)
    {
        int c = arr[i] - 48;
        b+=c;
    }
    printf("%d",b);
    return 0;
}