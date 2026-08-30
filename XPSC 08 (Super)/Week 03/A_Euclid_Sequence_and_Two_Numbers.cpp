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
        
        sort(v.rbegin(),v.rend());
        if(n==2)
        {
            cout << v[0] << ' ' << v[1] << '\n';
            continue;
        }
        bool f=true;
        for(int i=1;i<n-1;i++)
        {
            if(v[i-1]%v[i]!=v[i+1])
            {
                f=false;
                break;
            }
        }
        if(f)
        cout << v[0] << ' ' << v[1] << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}