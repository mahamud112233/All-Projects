#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b=0;
    for(int i=0,j=a-1;i<j;i++,j--)
    {
        if(arr[i]==arr[j])
        {
            b=b+1;
        }
    }
    if(b*2==a || (b*2)+1==a)
{
    printf("YES");
}
else 
{
    printf("NO");
}
    return 0;
}