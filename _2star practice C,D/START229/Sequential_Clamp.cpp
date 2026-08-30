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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cin >> b[i];
        }
        int y=103;
        for(int i=0;i<n;i++)
        {
            if(a[i]>y)
            {
                y=a[i];
            }
            else if(b[i]<y)
            {
                y=b[i];
            }
        }
        cout << y << '\n';
    }
    return 0;
}