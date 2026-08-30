#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int f = 0;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (arr[i] % 2 == 0 && arr[j ] % 2 == 0)
            {
                
            }
           else if (arr[i] % 2 != 0 && arr[j ] % 2 != 0)
           {
            
           }
           
           else
           {
            f=f+1;
           }
        }
    }
    printf("%d",f);
    return 0;
}