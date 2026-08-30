#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    bool f=false;
    for(int i=0;i<(1<<n);i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if((i>>j)&1)
            {
                sum+=v[j];
            }
            else
            {
                sum+=(360-v[j]);
            }
        }
        if(sum%360==0)
        {
            f=true;
            break;
        }
    }
    cout << (f?"YES\n":"NO\n");
    return 0;
}