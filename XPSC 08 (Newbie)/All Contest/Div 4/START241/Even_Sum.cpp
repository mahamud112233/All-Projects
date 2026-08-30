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
        int sum=0,od=0,ev=0;
        for(int i=0;i<n;i++) 
        {
            cin >> v[i];
            sum+=v[i];
            if(v[i]%2==0) ev++;
            else od++;
        }
        if(sum%2==1 && od>0)
        {
            cout << "Yes\n";
        }
        else if(sum%2==0 && ev>0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}