#include <bits/stdc++.h>
using namespace std;
const long long nn = 1e6;
map<int, int> t__Prime;
void t_prime(void)
{
    vector<int> v(nn + 1, 0);
    for (int i = 2; i <= nn; i++)
    {
        if (v[i] < 1)
        {
            t__Prime[i]++;
            for (int j = i+i; j <= nn; j += i)
            {
                v[j]++;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    t_prime();
    int n;
    cin >> n;
    vector<long long> vv(n);
    for (int i = 0; i < n; i++)
        cin >> vv[i];
    for (int i = 0; i < n; i++)
    {
        long long r=sqrt(vv[i]);
        if(r*r==vv[i] && t__Prime.count(r))
        {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}