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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.rbegin(), v.rend());
        int total = 0;
        bool im=false;
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1 && total + v[i] == x)
            {
                total += v[i + 1];
                int tem = v[i];
                v[i] = v[i + 1];
                v[i + 1] = tem;
                continue;
            }
            else if(i==n-1 && total + v[i] == x)
            {
                im=true;
                break;
            }
            total+=v[i];
        }
        if(!im){
            cout << "YES\n";
            for(int aa:v)
            {
                cout << aa << " ";
            }
            cout << '\n';
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}