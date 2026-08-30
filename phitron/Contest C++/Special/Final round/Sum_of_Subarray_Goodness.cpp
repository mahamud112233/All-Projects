#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];

    unordered_map<long long,int> last;
    long long sum_ending_here = 0, total = 0;

    for(int i=0;i<n;i++){
        long long prev_idx = last.count(A[i]) ? last[A[i]] : -1;
        sum_ending_here = (sum_ending_here + (i - prev_idx) * A[i]) % MOD;
        total = (total + sum_ending_here) % MOD;
        last[A[i]] = i;
    }

    cout << total << "\n";
    return 0;
}