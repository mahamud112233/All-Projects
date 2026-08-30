#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b) const
    {
        if (a.first != b.first)
            return a.first < b.first;
        else
            return a.second > b.second;
    }
};
int main()
{
    int t;
    cin >> t;
    map<int, int> m;
    set<pair<int, int>,cmp> st;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            int v;
            cin >> v;
            if (m.find(v) != m.end())
            {
                st.erase({m[v], v});
            }
            m[v]++;
            st.insert({m[v],v});
        }
        else if (n == 2)
        {
            if(st.empty())
            cout << "empty\n";
            else
            {
                pair<int,int> p=*st.begin();
                int f=p.first;
                int val=p.second;
                cout << val << "\n";
                int r=max(1,(f/2));
                f=f-r;
                st.erase(p);
                if(f==0)
                    m.erase(val);
                else
                {
                    m[val]=f;
                    st.insert({f,val});
                }
            }
        }
    }
    return 0;
}