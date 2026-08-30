#include <iostream>
#include <vector>

using namespace std;

long long MOD = 1000000007;
long long nCr[1005][1005];
long long fact[1005];

// nCr এবং Factorial আগে থেকেই হিসাব করে রাখা
void precompute() {
    fact[0] = 1;
    for (int i = 1; i <= 1000; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    for (int i = 0; i <= 1000; i++) {
        nCr[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            nCr[i][j] = (nCr[i - 1][j - 1] + nCr[i - 1][j]) % MOD;
        }
    }
}

void solve(int t) {
    int n, m, k;
    cin >> n >> m >> k;

    // ১. প্রথমেই M টি বিশেষ সংখ্যা থেকে K টি বেছে নেওয়া যা নিজের জায়গায় থাকবে
    long long ans = nCr[m][k];

    // ২. বাকি সংখ্যাগুলোর জন্য Inclusion-Exclusion Principle
    // আমাদের হাতে বাকি আছে (n-k) টি সংখ্যা এবং (n-k) টি জায়গা।
    // এর মধ্যে (m-k) টি সংখ্যার ওপর নিষেধাজ্ঞা আছে (তারা নিজের জায়গায় বসতে পারবে না)।
    
    int remaining_total = n - k;
    int remaining_restricted = m - k;

    long long ways_to_arrange_rest = 0;

    for (int i = 0; i <= remaining_restricted; i++) {
        long long term = (nCr[remaining_restricted][i] * fact[remaining_total - i]) % MOD;
        
        if (i % 2 == 1) {
            // বিজোড় হলে বিয়োগ
            ways_to_arrange_rest = (ways_to_arrange_rest - term + MOD) % MOD;
        } else {
            // জোড় হলে যোগ
            ways_to_arrange_rest = (ways_to_arrange_rest + term) % MOD;
        }
    }

    // চূড়ান্ত উত্তর
    ans = (ans * ways_to_arrange_rest) % MOD;

    cout << "Case " << t << ": " << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }

    return 0;
}