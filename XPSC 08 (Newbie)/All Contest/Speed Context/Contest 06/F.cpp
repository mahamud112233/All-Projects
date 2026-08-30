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
        int n,k;
        cin >> n >> k;
        vector<int> v(k);
        for(int i=0;i<k;i++) cin >> v[i];
        int last=0;
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            for(int j=v[i];j>last;j--)
            {
                ans.push_back(j);
            }
            last=v[i];
        }
        for(int aa:ans)
        {
            cout << aa << " ";
        }
        cout << "\n";
    }
    return 0;
}