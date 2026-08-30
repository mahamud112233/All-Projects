#include <stdio.h>
#include <string.h>
int main()
{
    char arr[11];
    char brr[11];

    scanf("%s", arr);
    scanf("%s", brr);

    int b = strlen(brr);
    int a = strlen(arr);

    printf("%d %d\n%s%s\n", a, b, arr, brr);

    char c = arr[0];
    arr[0] = brr[0];
    brr[0] = c;
    printf("%s %s",arr,brr);
    return 0;
}