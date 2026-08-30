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
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n%2==1)
        {
            cout << "NO\n";
            continue;
        }
        int fs=0,ls=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') fs++;
            else ls++;
        }
        if(fs!=ls)
        {
            cout << "NO\n";
            continue;
        }
        else
            cout << "YES\n";
        // stack<char> st;
        // for(int i=0;i<n;i++)
        // {
        //     if(!st.empty() && st.top()=='(')
        //     {
        //         st.pop();
        //     }
        //     else 
        //     {
        //         st.push(s[i]);
        //     }
        // }

    }
    return 0;
}