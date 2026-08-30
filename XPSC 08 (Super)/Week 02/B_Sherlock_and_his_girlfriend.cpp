#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> prime(n + 2, 0);
    for (int i = 2; i <= n + 1; i++)
    {
        if (!prime[i])
        {
            prime[i]=1;
            for (int j = i + i; j <= n + 1; j += i)
            {
                prime[j] = 2;
            }
        }
    }
    cout << *max_element(prime.begin(),prime.end()) << '\n';
    for (int i = 2; i <= n + 1; i++)
    {
        cout << prime[i] << ' ';
    }
    cout << '\n';
    return 0;
}