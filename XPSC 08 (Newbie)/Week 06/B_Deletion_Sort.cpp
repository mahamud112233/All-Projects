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
        bool f=true;
        for(int i=0;i<n;i++)
        {
            if(i+1<n && v[i]>v[i+1])
            {
                f=false;
                break;
            }
        }
        if(n==1 || f==false)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << n << "\n";
        }

    }
    return 0;
}