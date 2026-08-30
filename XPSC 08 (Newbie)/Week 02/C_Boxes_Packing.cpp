#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    map<int,int> m; 
    for(int i=0;i<n;i++)
    {
        m[v[i]]++;
    }
    int count=0;
    for(auto x:m)
    {
        if(count < x.second)
            count =x.second;
    }
    cout << count << endl;
    return 0;
}