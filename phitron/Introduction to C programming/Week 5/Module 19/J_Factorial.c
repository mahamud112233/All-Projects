#include <stdio.h>
long long int recur(int a, int i)
{
    if (a == i)
    {
        return i;
    }
    long long int v = recur(a, i + 1);
    return i * v;
}
int main()
{
    int a;
    scanf("%d", &a);
    long long int b = recur(a, 1);
    printf("%lld", b);
    return 0;
}