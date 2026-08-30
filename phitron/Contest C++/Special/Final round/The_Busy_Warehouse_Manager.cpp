#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    unordered_map<int, int> v;
    set<pair<int, int>> st;

    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int y;
            cin >> y;
            if (v[y] > 0)
                st.erase({v[y], y});
            v[y]++;
            st.insert({v[y], y});
        }
        else if (x == 2)
        {
            if (st.empty())
                cout << "empty\n";
            else
            {
                auto best = *st.rbegin();
                cout << best.second << "\n";
                st.erase(best);
                v.erase(best.second);
            }
        }
    }

    return 0;
}