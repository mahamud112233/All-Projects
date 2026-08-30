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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        pair<int,int> m1,m2;
        m1.second=INT_MIN;
        m2.second=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(v[i]>m1.second)
            {
                m1.second=v[i];
                m1.first=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i!=m1.first && v[i]>m2.second)
            {
                m2.second=v[i];
                m2.first=i;
            }
        }
        cout << min(m1.first,m2.first) << " " << max(m1.first,m2.first) << endl;
    }
    return 0;
}