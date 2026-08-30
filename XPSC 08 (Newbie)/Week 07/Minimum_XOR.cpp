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
        int ans=0;
        for(int i=0;i<n;i++) 
        {
            cin >> v[i];
            ans^=v[i];
        }
        int mn=ans;
        for(int i=0;i<n;i++)
        {
           if(((ans^v[i])<mn))
           {
            mn=(ans^v[i]);
           } 
        }
        cout << mn << '\n';
    }
    return 0;
}