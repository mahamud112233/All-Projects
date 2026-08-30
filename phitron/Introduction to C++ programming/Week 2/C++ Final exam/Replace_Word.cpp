#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string f, d;
        cin >> f >> d;
        for (int j = 0; j < f.size(); j++)
        {
            char ss[d.size() + 1];
            for (int k = 0; k < d.size(); k++)
            {
                ss[k] = f[j + k];
            }
            ss[d.size()] = '\0';
            if (ss == d)
            {
                f.erase(j, d.size());
                f.insert(j, "#");
            }
        }
        cout << f << endl;
    }
    return 0;
}