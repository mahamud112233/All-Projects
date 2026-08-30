#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b = 0;
    char arr[a];
    scanf("%s",arr);
    
    for (int i = 0; i < a; i++)
    {
        b = b + arr[i]-48;
    }
    
    if(b%3==0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
        return 0;
}