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
        int n, m;
        cin >> n >> m;
        vector<int> v(n,0);
        int f = 1;
        int i = 0;
        for (int j=m;j>=1;j--)
        {
            v[i] += j;
            int next=i+f;
            if(next<0 || next>=n)
            {
                f=f*(-1);
            }
            else
            {
                i=next;
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        cout << v.front() << '\n';
    }
    return 0;
}