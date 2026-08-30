#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n + 1), pos(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }

    int rounds = 1;
    for (int i = 1; i < n; i++)
    {
        if (pos[i] > pos[i + 1])
        {
            rounds++;
        }
    }

    cout << rounds << endl;
    return 0;
}
