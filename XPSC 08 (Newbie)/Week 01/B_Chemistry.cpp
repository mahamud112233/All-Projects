#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            v[s[i] - 'a']++;
        }
        int e = 0, o = 0;
        for (int i = 0; i < 26; i++)
        {
            if (v[i] % 2 == 0)
                e++;
            else
                o++;
        }
        int ans=o-k;
        if ( ans==1 || ans<=0  )
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}