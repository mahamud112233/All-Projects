#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int> v;
        int fs=1,nex=3;
        v.push_back(fs);
        for (int i = 0; i < n-1; i++)
        {
           v.push_back(fs*nex);
           fs+=2;
           nex+=2;
        }
        for (int x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}