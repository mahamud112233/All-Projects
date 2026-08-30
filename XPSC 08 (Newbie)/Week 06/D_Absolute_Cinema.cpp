#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<long long> f(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> f[i];
    }

    vector<long long> a(n + 1, 0);

    // Step 1: Compute inner components (a_2 to a_{n-1})
    for (int x = 2; x < n; x++) {
        long long val = f[x + 1] - 2 * f[x] + f[x - 1];
        a[x] = val / 2;
    }

    // Step 2: Compute weighted sum of inner elements for a_n extraction
    long long W = 0;
    for (int i = 2; i < n; i++) {
        W += (i - 1) * a[i];
    }

    // Step 3: Exact calculation of a_n without risking float sum dependencies
    a[n] = (f[1] - W) / (n - 1);

    // Step 4: Compute a_1 using the exact double-end derivative difference
    long long diff_term = (f[2] - f[1]) + (f[n] - f[n - 1]);
    a[1] = a[n] + (diff_term / 2);

    // Step 5: Output printing mapping
    for (int i = 1; i <= n; i++) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}