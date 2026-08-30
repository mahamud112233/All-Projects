#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            set<int> ss;
            set<int> s;
            for(int j=i;j<n;j++)
            {
                if(v[j]>=i && v[j]<=j)
                {
                    s.insert(v[j]+1);
                }
                else
                {
                    s.insert(v[j]-1);
                }
            }
            ss.insert(s.size());
            ans.push_back(*ss.begin());
        }
        for(int x:ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}