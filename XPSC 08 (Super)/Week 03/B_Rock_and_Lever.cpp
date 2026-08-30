#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin  >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        long long total=0;
        vector<int> ans(31,0);
        for(int i=0;i<n;i++)
        {
            
            int id=32-__builtin_clz(v[i]);
            if(ans[id]>0)
            {
                total+=ans[id];
            }
            ans[id]++;
        }
        cout << total << '\n';
    }
    return 0;
}