#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

// এই ফাংশনটি চেক করবে কন্টেইনারের সাইজ 'cap' হলে M টি কন্টেইনারে সব ভরা যায় কি না
bool can_fit(const vector<int>& vessels, int m, int cap) {
    int containers_needed = 1;
    int current_sum = 0;

    for (int milk : vessels) {
        if (milk > cap) return false; // একটি পাত্রই যদি কন্টেইনারের চেয়ে বড় হয়
        if (current_sum + milk <= cap) {
            current_sum += milk;
        } else {
            containers_needed++;
            current_sum = milk;
        }
    }
    return containers_needed <= m;
}

void solve(int t) {
    int n, m;
    cin >> n >> m;
    vector<int> vessels(n);
    int max_milk = 0;
    int total_milk = 0;

    for (int i = 0; i < n; i++) {
        cin >> vessels[i];
        max_milk = max(max_milk, vessels[i]);
        total_milk += vessels[i];
    }

    int low = max_milk, high = total_milk, ans = total_milk;

    // Binary Search on Answer
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (can_fit(vessels, m, mid)) {
            ans = mid;
            high = mid - 1; // আরও ছোট উত্তর খোঁজা
        } else {
            low = mid + 1; // কন্টেইনারের সাইজ বাড়ানো
        }
    }

    cout << "Case " << t << ": " << ans << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
    return 0;
}