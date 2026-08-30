#include <stdio.h>
#include <stdio.h>
int main()
{
    char str[10001];
    scanf("%s", str);
    int len = strlen(str);
    int arr[26] = {0};
    for (int i = 0; i < len; i++)
    {
        arr[str[i] - 'a']++;
    }
    for(int j=0;j<26;j++)
    {
        if(arr[j]>0)
        {
            printf("%c - %d\n",j+'a',arr[j]);
        }
    }

    return 0;
}