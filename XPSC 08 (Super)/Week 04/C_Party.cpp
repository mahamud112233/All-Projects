#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int MAXN = 22;
int mask_adj[MAXN]; // প্রতিটি নোডের নিজস্ব এবং প্রতিবেশীদের Bitmask
int parent_state[1 << MAXN]; // Path reconstruction-এর জন্য
int parent_node[1 << MAXN];  // কোন নোডকে pick করা হয়েছিল
int dist_state[1 << MAXN];   // Distance/Steps array

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    // প্রতিটি নোড শুরুতে অন্তত নিজেকে চেনে
    for (int i = 0; i < n; i++) {
        mask_adj[i] = (1 << i);
    }

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--; // 0-indexed
        mask_adj[u] |= (1 << v);
        mask_adj[v] |= (1 << u);
    }

    // Graph যদি শুরুতেই Complete Graph হয়
    bool already_complete = true;
    for (int i = 0; i < n; i++) {
        if (mask_adj[i] != (1 << n) - 1) {
            already_complete = false;
            break;
        }
    }

    if (already_complete) {
        cout << 0 << "\n";
        return 0;
    }

    // Distance array initialize (-1 দিয়ে)
    fill(dist_state, dist_state + (1 << n), -1);

    queue<int> q;

    // Initial states: প্রতিটি নোড $i$-কে কেন্দ্র করে শুরুতে State গঠন
    // কারণ ১ম অপারেশন যেকোনো একটা এডজাসেন্ট নোড থেকে শুরু হতে পারে
    for (int i = 0; i < n; i++) {
        int initial_mask = mask_adj[i];
        if (dist_state[initial_mask] == -1) {
            dist_state[initial_mask] = 1;
            parent_state[initial_mask] = -1;
            parent_node[initial_mask] = i;
            q.push(initial_mask);
        }
    }

    int target_mask = (1 << n) - 1;

    // BFS Loop
    while (!q.empty()) {
        int curr_mask = q.front();
        q.pop();

        if (curr_mask == target_mask) break;

        // বর্তমানে যারা পরিচিত (curr_mask-এ ১ আছে), তাদের মধ্য থেকে যেকোনো নোড u বাছাই করা
        for (int u = 0; u < n; u++) {
            if (curr_mask & (1 << u)) {
                // u-কে বাছাই করলে u-এর সাহায্যে সমস্ত প্রতিবেশীরা পরস্পরকে চিনে ফেলবে
                // তাই curr_mask-এর সাথে u-এর adjacency mask যুক্ত হবে
                int next_mask = curr_mask | mask_adj[u];

                if (dist_state[next_mask] == -1) {
                    dist_state[next_mask] = dist_state[curr_mask] + 1;
                    parent_state[next_mask] = curr_mask;
                    parent_node[next_mask] = u;
                    q.push(next_mask);
                }
            }
        }
    }

    // Reconstruction of Output Path
    vector<int> ans;
    int curr = target_mask;
    while (curr != -1) {
        ans.push_back(parent_node[curr]);
        curr = parent_state[curr];
    }
    reverse(ans.begin(), ans.end());

    cout << ans.size() << "\n";
    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i] + 1 << (i + 1 == (int)ans.size() ? "" : " ");
    }
    cout << "\n";

    return 0;
}