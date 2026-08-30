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
        vector<long long int> v(n+1);
        bool f=true;
        for(int i=1;i<=n;i++)
        {
            cin >> v[i];
            if(v[i]!=0) f=false;
        }
        if(f) 
        {
            cout << -1 << '\n';
            continue;
        }
        bool ff=true;
        for(int i=1;i<=n-2 && ff; i++)
        {
            for(int j=i+1;j<=n-1 && ff;j++)
            {
                for(int k=j+1;k<=n && ff;k++)
                {
                    if(v[i]+v[j]!=v[k])
                    {
                        cout << i << " " << j << " " << k << '\n';
                        ff=false;
                    }
                    else if(v[j]+v[k]!=v[i])
                    {
                        cout << j << " " << k << " " << i << '\n';
                        ff=false;
                    }
                    else if(v[i]+v[k]!=v[j])
                    {
                        cout << i << " " << k << " " << j << '\n';
                        ff=false;
                    }

                }
            }
        }
    }
    return 0;
}