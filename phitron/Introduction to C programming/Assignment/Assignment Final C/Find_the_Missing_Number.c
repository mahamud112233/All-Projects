#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    long long int arr[a][4];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%lld",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        long long int mul=1;
        for(int j=1;j<4;j++)
        {
            mul=mul*arr[i][j];
        }
        if (arr[i][0]%mul==0)
        {
            printf("%lld",arr[i][0]/mul);
        }
        else 
        {
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}