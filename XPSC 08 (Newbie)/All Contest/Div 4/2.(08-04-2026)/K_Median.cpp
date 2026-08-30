#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int si_m = n - k;
        int l=si_m/2;
        if(si_m%2==0) l--;
        int r=si_m/2;
        set<int> ans;
        for(int i=l;i<n-r;i++)
        {
            ans.insert(v[i]);
        }
        for(int x:ans)
        {
            cout << x << " ";
        }
        cout << endl;

    }
    return 0;
}