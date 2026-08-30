#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair<int, string> p;
    // p= make_pair(1,"Mahamud");
    // cout << p.first << " " << p.second;
    // p = {1, "Mahamud"};
    // cout << p.first << " " << p.second;
    int a;
    cin >> a;
    vector<pair<int,int>> v(a);
    for(int i=0;i<a;i++)
    {
        cin >> v[i].first >> v[i].second;
    }
     for(int i=0;i<a;i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}