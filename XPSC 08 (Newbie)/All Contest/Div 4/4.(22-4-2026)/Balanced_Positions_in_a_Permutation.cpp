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
        {
            cin >> v[i];
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            int l = 0, r = 0;
            for (int j = i - 1; j >= 0; j--)
                if (v[i] > v[j])
                    l++;
            for (int j = i + 1; j < n; j++)
                if (v[i] < v[j])
                    r++;
            if(l==r) c++;
        }
        cout << c << endl;
    }
    return 0;
}