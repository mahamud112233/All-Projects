#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        string st=to_string(x);
        int si=st.size();
        int y=1;
        for(int i=0;i<si;i++)
            y*=10;
        cout << y+1 << '\n';
    }
    return 0;
}