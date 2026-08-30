#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int c;
    scanf("%d", &c);
    int flag = 1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] == c)
            {
                flag = 2;
            }
        }
    }
    if(flag==2)
    {
        printf("will not take number");
    }
    else 
    {
        printf("will take number");
    }
    return 0;
}