#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int fst,lst;
        for(int i=0;i<n;i++) {if(s[i]=='B') {fst=i;break;}}
        for(int i=n-1;i>=0;i--) {if(s[i]=='B') {lst=i;break;}}
        cout << lst-fst+1 << endl;
    }
    return 0;
}