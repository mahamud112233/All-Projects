#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int b=0,c=0;

    for (int i = 0; i < a; i++)
    {
        b=b+arr[i][i];
        
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(i+j==a-1)
        {
            c=c+arr[i][j];
        }
        }
    }
    int sum=b-c;
    if(sum<0)
    {
        sum=sum*(-1);
    }
    printf("%d",sum);
    
    return 0;
}