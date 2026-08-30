#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int n = N - 1;
    int final_ans = 0;

    for (int i = 0; i < N; i++) {
        // Lucas' Theorem ব্যবহার করে চেক করা হচ্ছে nCi বিজোড় কি না
        if ((n & i) == i) {
            final_ans ^= A[i];
        }
    }

    cout << final_ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}