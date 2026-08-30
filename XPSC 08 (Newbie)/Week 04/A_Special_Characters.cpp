#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n%2==1)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        bool f=false;
        for(int i=0;i<n/2;i++)
        {
            if(f==false)
            {
                cout << "AA";
                f=true;
            }
            else
            {
                cout << "BB";
                f=false;
            }
        }
        cout << endl;
    }
    return 0;
}