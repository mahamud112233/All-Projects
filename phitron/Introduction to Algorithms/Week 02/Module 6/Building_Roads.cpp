#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ar;
vector<bool> vis;

void dfs(int node) {
    vis[node] = true;
    for(int child : ar[node]) {
        if(!vis[child]) dfs(child);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    ar.assign(n + 1, {});      // 1-based indexing
    vis.assign(n + 1, false);

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }

    vector<int> reps; // representative nodes of each component

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            reps.push_back(i);
            dfs(i);
        }
    }

    int k = reps.size();
    cout << k - 1 << endl;  // minimum new roads needed

    for(int i = 1; i < k; i++) {
        cout << reps[0] << " " << reps[i] << endl; // connect all components
    }

    return 0;
}