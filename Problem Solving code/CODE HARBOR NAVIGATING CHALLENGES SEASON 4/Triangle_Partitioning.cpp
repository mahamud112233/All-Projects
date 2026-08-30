#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void solve(int t) {
    double ab, ac, bc, ratio;
    cin >> ab >> ac >> bc >> ratio;

    // সূত্র: AD = AB * sqrt( ratio / (ratio + 1) )
    double ad = ab * sqrt(ratio / (ratio + 1.0));

    // দশমিকের পর ৮-১০ ঘর পর্যন্ত প্রিন্ট করার জন্য
    cout << "Case " << t << ": " << fixed << setprecision(10) << ad << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
    return 0;
}