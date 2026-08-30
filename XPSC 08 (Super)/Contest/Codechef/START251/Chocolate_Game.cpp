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
        vector<int> v(n), odd;
        int to = 0, f_t = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            to += v[i];
            if (v[i] % 2 == 0)
            {
                f_t += v[i];
            }
            else
            {
                f_t+=(v[i]-1);
                odd.push_back(1);
            }
        }
        int al = 0;

        if (to % 2 == 0)
        {
            al = f_t;
            al+=(odd.size()/2);
            if(odd.size()%2==1)
            {
                al++;
            }
        }
        else
        {
            al+=(odd.size()/2);
        }
        
        cout << al << '\n';
    }
    return 0;
}