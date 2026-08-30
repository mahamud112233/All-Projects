#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1001];
    scanf("%s",arr);
    char brr[1001];
    scanf("%s",brr);
    int len=strlen(arr);
    int lenb=strlen(brr);
    int a,b;
    scanf("%d %d",&a,&b);
    char crr[2001];
    for(int i=0;i<len;i++)
    {
        crr[i]=arr[i];
    }
    for(int i=a,j=0;i<=b;i++,j++)
    {
        crr[len+j]=brr[i];
    }
 crr[len+1+(b-a)]='\0';
    printf("%s",crr);


    return 0;
}