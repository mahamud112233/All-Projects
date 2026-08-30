#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100001];
    scanf("%s",arr);
    int len= strlen(arr);
    for(int i=0;i<len;i++)
    {
        if(arr[i]>='A' && arr[i]<='Z')
        {
            arr[i]+=32;
        }
         else if(arr[i]>='a' && arr[i]<='z')
        {
            arr[i]-=32;
        }
        else if(arr[i]==',')
        {
            arr[i]=' ';
        }
    }
    printf("%s",arr);

    return 0;
}