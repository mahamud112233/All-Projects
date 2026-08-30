#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ts;
    cin >> ts;
    while(ts--){
        int n; cin >> n;
        int mx = 0;
        int k = 4;
        while(k--){
            int val;
            cin >> val;
            mx = max(mx, val);
        }
        cout << mx << '\n';
    }
    return 0;
}