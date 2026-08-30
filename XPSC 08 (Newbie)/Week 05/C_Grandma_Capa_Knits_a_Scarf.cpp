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
        int l = 0, r = n - 1;
        bool f1 = true, f2 = true;
        int c1 = 0, c2 = 0;
        long long int ans = 0;
        bool flag = true;
        while (l <= r && flag)
        {
            if (s[l] != s[r])
            {
                flag = false;
                char ll = s[l], rr = s[r];
                for (int j = l, k = r; j <= k;)
                {
                    if (s[j] == ll && s[k] == ll)
                    {
                        j++;
                        k--;
                        continue;
                    }
                    else if (s[j] == ll)
                    {
                        c1++;
                        j++;
                        continue;
                    }
                    else if (s[k] == ll)
                    {
                        c1++;
                        k--;
                        continue;
                    }
                    if (s[j] != s[k])
                    {
                        f1 = false;
                        break;
                    }
                    else
                    {
                        j++;
                        k--;
                    }
                }
                for (int j = l, k = r; j <= k;)
                {
                    if (s[j] == rr && s[k] == rr)
                    {
                        j++;
                        k--;
                        continue;
                    }
                    else if (s[j] == rr)
                    {
                        c2++;
                        j++;
                        continue;
                    }
                    else if (s[k] == rr)
                    {
                        c2++;
                        k--;
                        continue;
                    }
                    if (s[j] != s[k])
                    {
                        f2 = false;
                        break;
                    }
                    else
                    {
                        j++;
                        k--;
                    }
                }
            }
            else
            {
                l++;
                r--;
            }
        }
        if (f1 && f2)
            cout << min(c1, c2) << endl;
        else if (f1)
            cout << c1 << endl;
        else if (f2)
            cout << c2 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}