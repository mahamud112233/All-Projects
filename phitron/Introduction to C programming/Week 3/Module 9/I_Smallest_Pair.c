#include<stdio.h>
#include<limits.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(;a>0;)
    {
        int b;
        scanf("%d",&b);
        int arr[b];
        for(int i=0;i<b;i++)
        {
            scanf("%d",&arr[i]);
        }
        int m=INT_MAX;
        for(int i=0;i<b-1;i++)
        {
            for(int j=i+1;j<b;j++)
            {
                int n=arr[i]+arr[j]+(j-i);
                if(n<m)
                {
                    m=n;
                }
            }
        }
        printf("%d\n",m);
        a--;
    }
    return 0;
}