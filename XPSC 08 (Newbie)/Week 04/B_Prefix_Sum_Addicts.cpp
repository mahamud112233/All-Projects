#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long int> v(k);
        for (int i = 0; i < k; i++)
            cin >> v[i];
        deque<long long int> de;
        for (int i = k - 1; i > 0; i--)
        {
            de.push_front(v[i] - v[i - 1]);
        }
        bool f = true;
        int val = de.front();
        for (int x : de)
        {
            if (x < val)
            {
                f = false;
                break;
            }
            val = x;
        }
        if (k > 1 && f)
        {
            long long int tem = de.front() * (n - k + 1);
            if (tem < v[0])
            {
                f = false;
            }
        }
        cout << (f ? "Yes\n" : "No\n");
    }
    return 0;
}