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
        int ev=0,od=0;
        for(int aa:v)
        {
            if(aa%2==0) ev++;
            else od++;
        }
        if(od==1) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}