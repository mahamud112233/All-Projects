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
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        if (mp.size() > 2)
        {
            cout << "No" << endl;
        }
        else
        {
            if (mp.size() > 1)
            {
                vector<int> va;
                for (auto x : mp)
                {
                    va.push_back(x.second);
                }
                if(abs(va[0]-va[1])>1)
                {
                    cout << "No" << endl;
                }
                else 
                {
                    cout << "Yes" << endl;
                }
            }
            else
                cout << "Yes" << endl;
        }
    }
    return 0;
}