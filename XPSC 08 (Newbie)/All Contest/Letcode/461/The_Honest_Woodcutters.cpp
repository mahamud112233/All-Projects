#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n+1),b(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) cin >> b[i];
    bool f=true;
    for(int i=1;i<=n;i++)
    {
        if(i!=b[a[i]]) 
        {
            f=false;
            break;
        }
    }
    cout << (f? "Yes\n":"No\n");
    return 0;
}