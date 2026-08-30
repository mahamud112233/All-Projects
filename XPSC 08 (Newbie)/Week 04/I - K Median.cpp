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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int l=(n-k)/2;
        int r=(n-k)/2;
        if(((n-k)%2==0))
        {
            l=l-1;
        }
        set<int> s;
        for(int i=l;i<n-r;i++)
        {
            s.insert(v[i]);
        }
        for(int x:s)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}