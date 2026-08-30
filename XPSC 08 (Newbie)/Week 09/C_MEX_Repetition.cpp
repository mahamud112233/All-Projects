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
        vector<bool> mex(n+1,false);
        deque<int> v(n);
        for(int i=0;i<n;i++) 
        {
            cin >> v[i];
            mex[v[i]]=true;
        }
        int m=0;
        for(int i=0;i<=n;i++)
        {
            if(!mex[i])
            {
                m=i;break;
            }
        }
        for(int i=0;i<k%(n+1);i++)
        {
            v.push_front(m);
            m=v.back();
            v.pop_back();
        }
        for(auto x:v)
        {
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}