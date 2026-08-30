#include <bits/stdc++.h>
using namespace std;
int arr[10004];
int fibo(int n)
{
    if (n < 2)
        return n;
    if (arr[n] != -1)
        return arr[n];
    arr[n] = fibo(n - 1) + fibo(n - 2);
    return arr[n];
}
int main()
{
    memset(arr, -1, sizeof(arr));
    long long int n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}