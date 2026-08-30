#include <bits/stdc++.h>
using namespace std;
int leader[100];
int gp_size[100];
int find(int node)
{
    if (leader[node] == -1)
        return node;
    int ld = find(leader[node]);
    leader[node] = ld;
    return ld;
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
    memset(leader, -1, sizeof(leader));
    memset(gp_size, 1, sizeof(gp_size));
    bool flag = false;
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);
        if (leaderA == leaderB)
        {
            flag = true;
        }
        else
        {
            dsu_union(leaderA, leaderB);
        }
    }
    if (flag)
        cout << "Cycle detected\n";
    else
        cout << "NO Cycle\n";
    return 0;
}