#include <bits/stdc++.h>
using namespace std;
int leader[1005];
int gp_size[1005];
int find(int nd)
{
    if (leader[nd] == -1)
        return nd;
    int ldnd = find(leader[nd]);
    leader[nd] = ldnd;
    return ldnd;
}
void dsu_union(int l1, int l2)
{
    if (gp_size[l1] >= gp_size[l2])
    {
        leader[l2] = l1;
        gp_size[l1] += gp_size[l2];
    }
    else
    {
        leader[l1] = l2;
        gp_size[l2] += gp_size[l1];
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        leader[i] = -1;
        gp_size[i] = 1;
    }
    vector<pair<int, int>> v;
    vector<pair<int, int>> v1;
    for (int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int l1 = find(a);
        int l2 = find(b);
        if (l1 == l2)
            v.push_back({a, b});
        else
            dsu_union(l1, l2);
    }
    for (int i = 2; i <= n; i++)
    {
        int l1 = find(1);
        int li = find(i);
        if (l1 != li)
        {
            v1.push_back({l1, li});
            dsu_union(l1, li);
        }
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << " " << v1[i].first << " " << v1[i].second << endl;
        ;
    }
    return 0;
}