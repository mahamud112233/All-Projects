#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin >> a >> b >> c;
    int ans=abs(a-b);
    if(ans<=c) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}