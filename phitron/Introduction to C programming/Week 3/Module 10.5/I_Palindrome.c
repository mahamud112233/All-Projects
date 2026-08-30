#include<stdio.h>
int main()
{
    char arr[1001];
    scanf("%s",arr);
    int len=strlen(arr);
    int b=0;
    for (int i=0,j=len-1;i<j;i++,j--)
    {
        if(arr[i]==arr[j])
        {
            b=b+1;
        }
    }
    if(b*2==len||(b*2)+1==len)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}