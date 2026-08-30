#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1000001];
    scanf("%s", arr);
    int count = strlen(arr);
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += arr[i]-'0';
    }
    printf("%d", sum);

    return 0;
}