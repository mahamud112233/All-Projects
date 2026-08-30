#include<stdio.h>
int recur(char s[],int i)
{
    if(s[i]=='\0')
    {
        return 0;
    }
    int n=recur(s,i+1);
    if(s[i]=='a' ||s[i]=='A' ||s[i]=='e' ||s[i]=='E' ||s[i]=='i' ||s[i]=='I' ||s[i]=='o' ||s[i]=='O' ||s[i]=='u' ||s[i]=='U')
    {
        return n+1;
    }
    else 
    {
        return n;
    }
}
int main()
{
    char s[201];
    fgets(s,201,stdin);
    int count=recur(s,0);
    printf("%d",count);
    return 0;
}