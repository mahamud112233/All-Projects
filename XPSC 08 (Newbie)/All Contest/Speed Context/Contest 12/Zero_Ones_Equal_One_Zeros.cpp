#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ts;
    cin >> ts;
    while(ts--){
        int n;
        cin >> n;
        if(n%2){
            for(int i = 0; i < n / 2; i++){
                cout << '0';
            }
            cout << '1';
            for(int i = 0; i < n / 2; i++) {
                cout << '0';
            }
        }
        else{
            cout << '1';
            for(int i = 0; i < n - 2; i++){
                cout << "0";
            }
            cout << "1";
        }
        cout << '\n';
    }
    return 0;
}