#include <bits/stdc++.h>
using namespace std;
const int nn = 1e6;
vector<int> prime;
void do_prime(void)
{
    vector<int> go(nn + 1, 0);
    for (int i = 2; i <= nn; i++)
    {
        if (!go[i])
        {
            prime.push_back(i);
            for (int j = i + i; j <= nn; j += i)
            {
                go[j] = 1;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    do_prime();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int val=v[i],id=0;
            while (val > 1)
            {
                if (val % prime[id] == 0)
                {
                    mp[prime[id]]++;
                    val /= prime[id];
                }
                else
                    id++;
            }
        }
        if(mp.empty())
        {
            cout << "YES\n";
            continue;
        }
        bool f=true;
        for (auto [a, b] : mp)
        {
            if(b%n!=0)
            {
                f=false;
                break;
            }
        }
        cout << (f? "YES\n": "NO\n");
    }
    return 0;
}