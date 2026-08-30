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
        string s;
        cin >> s;
        vector<int> v;
        int len = 0;
        for (int i = 0; i < n;i++)
        {
            if (s[i] == 'u' || s[i] == 'o')
            {
                len = 1;
                int j=i+1;
                while (j < n)
                {
                    if (j + 1 < n && s[j] == 'w' && (s[j + 1] == 'u' || s[j + 1] == 'o'))
                    {
                        len += 2;
                        j += 2;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            v.push_back(len);
        }
        sort(v.begin(), v.end());
        cout << v.back() << endl;
    }
    return 0;
}