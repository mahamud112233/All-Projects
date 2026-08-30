#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n),pre_mx(n),suf_mn(n);
        for(int i=0;i<n;i++) cin >> v[i];
        pre_mx[0]=v[0];
        for(int i=1;i<n;i++) pre_mx[i]=min(pre_mx[i-1],v[i]);
        suf_mn[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--) suf_mn[i]=max(suf_mn[i+1],v[i]);
        string s;
        for(int i=0;i<n;i++)
        {
            if(v[i]==pre_mx[i] || v[i]==suf_mn[i])
            {
                s.push_back('1');
            }
            else 
            {
                s.push_back('0');
            }
        }
        cout << s << endl;
    }
    return 0;
}