#include <iostream>
#include <vector>

using namespace std;

// nCr বের করার জন্য ডাইনামিক প্রোগ্রামিং পদ্ধতি (প্যাসকেল ট্রায়াঙ্গেল)
// এটি বড় সংখ্যা হ্যান্ডেল করতে সুবিধা দেয়
long long nCr[35][35];

void precompute() {
    for (int i = 0; i <= 30; i++) {
        nCr[i][0] = 1; // nC0 সবসময় 1
        for (int j = 1; j <= i; j++) {
            nCr[i][j] = nCr[i - 1][j - 1] + nCr[i - 1][j];
        }
    }
}

// ফ্যাক্টোরিয়াল বের করার ফাংশন
long long factorial(int k) {
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res *= i;
    }
    return res;
}

void solve(int t) {
    int n, k;
    cin >> n >> k;

    cout << "Case " << t << ": ";

    // যদি কিস্তির সংখ্যা বোর্ডের সাইজের চেয়ে বেশি হয়, তবে বসানো অসম্ভব
    if (k > n) {
        cout << 0 << endl;
        return;
    }

    // সূত্র: nCr * nCr * k!
    // nCr (সারি বাছাই) * nCr (কলাম বাছাই) * k! (সাজানো)
    // এটাকে nCr * P(n, k) ও বলা যায়
    
    long long combinations_of_rows = nCr[n][k];
    
    // P(n, k) বের করছি: n * (n-1) * ... * (n-k+1)
    long long permutations_of_cols = 1;
    for (int i = 0; i < k; i++) {
        permutations_of_cols *= (n - i);
    }

    long long ans = combinations_of_rows * permutations_of_cols;
    cout << ans << endl;
}

int main() {
    // ফাস্ট ইনপুট-আউটপুট
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