#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tr;
    cin >> tr;
    cin.ignore();
    map<string, string> m,per;
    for (int i = 0; i < tr; i++)
    {
        string a,b;
        cin >> a >> b;
        if(per.count(a))
        {
           string root=per[a];
           m[root]=b;
           per[b]=root;
           per.erase(a);
        }
        else
        {
            m[a]=b;
            per[b]=a;
        }
    }
    
    cout << m.size() << endl;
    for (auto ans : m)
    {
        cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}