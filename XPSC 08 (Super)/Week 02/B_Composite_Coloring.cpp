#include <bits/stdc++.h>
using namespace std;
const int nn = 1000;
vector<int> prime;
void do_prime(void)
{
    vector<int> p(nn + 1, 0);
    for (int i = 2; i * i <= nn; i++)
    {
        if (!p[i])
        {
            prime.push_back(i);
            for (int j = i + i; j <= nn; j += i)
            {
                p[j] = 1;
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
        vector<int> v(n), c(n,0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int m = 0;
        bool f = false;
        for (int i = 0; i < prime.size(); i++)
        {
            int val = prime[i];
            for (int j = 0; j < n; j++)
            {
                if (!f && v[j] % val == 0 && c[j]==0)
                {
                    m++;
                    f = true;
                }
                if (v[j] % val == 0 && c[j]==0)
                {
                    c[j] = m;
                }
            }
            f = false;
        }
        cout << m << '\n';
        for(auto it:c)
        {
            cout << it << ' ';
        }
        cout << "\n";
    }
    return 0;
}