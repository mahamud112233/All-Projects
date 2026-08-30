#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        if(i+1<n && v[i]>v[i+1])
        {
            ans+=(v[i]-v[i+1]);
            v[i+1]=v[i];
        }
    }
    cout << ans << endl;
    return 0;
}