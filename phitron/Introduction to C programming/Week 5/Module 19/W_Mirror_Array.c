#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=b-1;j>=0;j--)
        {
            printf("%d",arr[i][j]);
            if(j>0)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}