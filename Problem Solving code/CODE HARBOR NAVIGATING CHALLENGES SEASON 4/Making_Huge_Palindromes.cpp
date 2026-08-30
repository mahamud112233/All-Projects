#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// KMP-এর failure function যা দীর্ঘতম prefix-suffix মিল খুঁজে বের করে
vector<int> compute_prefix_function(string P) {
    int m = P.length();
    vector<int> pi(m);
    pi[0] = 0;
    int k = 0;
    for (int q = 1; q < m; q++) {
        while (k > 0 && P[k] != P[q])
            k = pi[k - 1];
        if (P[k] == P[q])
            k++;
        pi[q] = k;
    }
    return pi;
}

void solve(int caseNum) {
    string s;
    cin >> s;
    int n = s.length();
    
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());

    // নতুন স্ট্রিং: উল্টানো স্ট্রিং + বিশেষ চিহ্ন + মূল স্ট্রিং
    // এটি মূল স্ট্রিংয়ের শেষের দিকের দীর্ঘতম প্যালিনড্রোম খুঁজে বের করবে
    string temp = rev_s + "#" + s;
    vector<int> pi = compute_prefix_function(temp);

    // শেষের ভ্যালুটিই হলো প্যালিনড্রোম অংশের দৈর্ঘ্য
    int longest_palindrome_suffix = pi.back();

    // মোট দৈর্ঘ্য = মূল দৈর্ঘ্য + (বাড়তি অংশ যা যোগ করতে হবে)
    // বাড়তি অংশ = n - longest_palindrome_suffix
    int result = n + (n - longest_palindrome_suffix);

    cout << "Case " << caseNum << ": " << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
    return 0;
}