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
        long long int n, m;
        cin >> n >> m;
        if(n%3!=2)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<long long int> v;
            long long int f = m / 2, cf = 0;
            long long int l = m - f, cl = 0;
            for (long long int i = 0; i < n; i++)
            {
                if (cf == 0)
                {
                    v.push_back(f);
                    cf++;
                }
                else if (cf == 1)
                {
                    v.push_back(f);
                    cf++;
                }
                else if (cl == 0)
                {
                    v.push_back(0);
                    cl++;
                }
                else if (cl == 1)
                {
                    v.push_back(l);
                    cl++;
                }
                else if (cl == 2)
                {
                    v.push_back(l);
                    cl++;
                }
                else if (cl == 3)
                {
                    v.push_back(0);
                    cl++;
                }
                else if (cf == 2 && cl == 4)
                {
                    cf = 0;
                    cl = 0;
                    i--;
                }
            }
            for (auto xx : v)
            {
                cout << xx << " ";
            }
            cout << endl;
        }
    }
    return 0;
}