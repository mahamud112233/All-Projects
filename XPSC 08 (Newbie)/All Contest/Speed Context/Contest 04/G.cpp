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
        vector<int> ans;
        ans.push_back(v[0]);
        bool flag=true;
        for(int i=1;i<n;i++)
        {
            if(ans.back()%v[i]==0)
            {
                ans.push_back(v[i]);
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(!flag) cout << -1 << '\n';
        else
            for(int aa:ans)
            {
                cout << aa << " ";
            }
            cout << '\n';
    }
    return 0;
}