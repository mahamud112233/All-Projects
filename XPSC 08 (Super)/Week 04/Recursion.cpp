#include <bits/stdc++.h>
using namespace std;
void rec(int n)
{
    if (n == 0)
        return;

    cout << n << ' ';
    rec(n - 1);
    rec(n - 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    rec(n);
    return 0;
}