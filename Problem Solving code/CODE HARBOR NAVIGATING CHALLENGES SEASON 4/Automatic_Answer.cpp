#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin  >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int ans=abs((((((((n*567)/9)+7492)*235)/47)-498)/10)%10);
        cout << ans << endl;
        
    }
    return 0;
}