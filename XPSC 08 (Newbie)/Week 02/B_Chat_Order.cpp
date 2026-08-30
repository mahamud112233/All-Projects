#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<string> q;
    map<string,bool> mp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        q.push_back(s);
        if(!mp.count(s))
        {
            mp[s]=true;
        }
    }
    while(!q.empty())
    {
        string a=q.back();
        q.pop_back();
        if(mp[a]==true)
        {
            cout << a << endl;
            mp[a]=false;
        }
    }
    return 0;
}