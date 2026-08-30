#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int i = n;
    int id = 0;
    int ans = 0;
    while (i > 0)
    {
        if (i % 10 == 7)
        {
            ans += (1 << id);
        }

        i /= 10;
        id++;
    }
    for (int j = 1; j < id; j++)
    {
        ans += (1 << j);
    }
    cout << ans + 1 << "\n";
    return 0;
}