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
        int count=__builtin_popcount(n);
        if(count==1)
        {
            cout << 0 << " " << n << '\n';
            continue;
        }
        vector<int> v;
        for(int i=0;i<30;i++)
        {
            if((n>>i)&1==1)
            {
                v.push_back((1<<i));
            }
        }
        int a=0,b=v.back();
        for(int i=0;i<v.size()-1;i++)
        {
            a+=v[i];
        }
        cout << a << " " << b << '\n';
    }
    return 0;
}