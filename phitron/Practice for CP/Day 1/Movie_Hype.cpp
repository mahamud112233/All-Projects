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
        vector<int> v(n+1);
        for(int i=0;i<=n;i++)
        {
            cin >> v[i];
        }
        int val=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int m=max(v[i],v[i+1]);
            if(m<val)
            {
                val=m;
            }
        }
        cout << val << endl;
    }
    return 0;
}