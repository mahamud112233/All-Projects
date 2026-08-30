#include <bits/stdc++.h>
using namespace std;
int leader[100005];
int gp_size[100005];
int cm;
int mx;
int find(int node)
{
    if (leader[node] == -1)
        return node;
    int ldnd = find(leader[node]);
    leader[node] = ldnd;
    return ldnd;
}
void dsu_union(int n1, int n2)
{
    int l1 = find(n1);
    int l2 = find(n2);
    if (l1 == l2)
        return;
    if (gp_size[l1] >= gp_size[l2])
    {
        leader[l2] = l1;
        gp_size[l1] += gp_size[l2];
        mx = max(mx, gp_size[l1]);
    }
    else
    {
        leader[l1] = l2;
        gp_size[l2] += gp_size[l1];
        mx = max(mx, gp_size[l2]);
    }
    cm--;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cm = n;
    mx=1;
    for (int i = 1; i <= n; i++)
    {
        leader[i] = -1;
        gp_size[i] = 1;
    }
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        dsu_union(a, b);
        cout << cm << " " << mx << endl;
    }
    return 0;
}