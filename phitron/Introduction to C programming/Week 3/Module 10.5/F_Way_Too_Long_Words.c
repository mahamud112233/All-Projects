#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    char arr[101];
    int brr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%s",arr);
        brr[i]=strlen(arr);
        if(brr[i]>10)
        {
            printf("%c%d%c\n",arr[0],brr[i]-2,arr[brr[i]-1]);
        }
        else 
        {
            printf("%s\n",arr);
        }
    }
    
    return 0;
}