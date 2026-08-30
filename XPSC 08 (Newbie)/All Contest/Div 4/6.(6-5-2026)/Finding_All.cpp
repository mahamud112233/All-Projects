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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int zero = 0, pos = 0, neg = 0;
        vector<int> need;
        for (auto xx : v)
        {
            if (xx == 0)
            {
                if (zero < 2)
                {
                    need.push_back(xx);
                    zero++;
                }
            }
            if (xx == -1)
            {
                if (neg < 2)
                {
                    need.push_back(xx);
                    neg++;
                }
            }
            if (xx == 1)
            {
                if (pos < 2)
                {
                    need.push_back(xx);
                    pos++;
                }
            }
            if (zero > 1 && pos > 1 && neg > 1)
            {
                break;
            }
        }
        sort(need.begin(), need.end());
        set<int> st;
        do
        {
            int x = 0;
            for (auto aa : need)
            {
                if (x < aa)
                    x = -1;
                else if (x == aa)
                    x = 0;
                else
                    x = 1;
            }
            st.insert(x);
        } while (next_permutation(need.begin(), need.end()));
        for (auto bb : st)
        {
            cout << bb << " ";
        }
        cout << endl;
    }
    return 0;
}