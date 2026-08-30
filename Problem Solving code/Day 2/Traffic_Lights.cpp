#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int x, n;
    cin >> x >> n;

    set<int> pos = {0, x};
    multiset<int> gap = {x};

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;

        auto it = pos.upper_bound(p);
        int right = *it;
        int left = *prev(it);

        gap.erase(gap.find(right - left));
        gap.insert(p - left);
        gap.insert(right - p);

        pos.insert(p);

        cout << *gap.rbegin() << " ";
    }

    return 0;
}
