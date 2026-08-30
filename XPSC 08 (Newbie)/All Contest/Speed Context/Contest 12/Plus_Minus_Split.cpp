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
        vector<int> v(n);
        cin >> v[0];
        bool f=true;
        for(int i = 1; i < n; i++){
            cin >> v[i];
            if(v[0] != abs(v[i])){
                f=false;
            }

        }
        if(!f) {
            cout << "no\n";
            continue;
        }
        vector<int> t(n, v[0]);
        if(v == t){
            cout << "Yes" << '\n';
            continue;
        }
        bool f1 = 0,f2=1;
        int aa=v[0];
        int i=1;
        while(i<n)
        {
            if(f1==0 && v[i-1]==v[i])
            {
                i++;
            }
            else if(f1==0 && v[i-1]!=v[i])
            {
                i++;
                f1=1;
            }
            else if(f1==1 && v[i]==aa)
            {
                f2=0;
                break;
            }
        }
        cout << (f2? "Yes\n":"No\n");
        
    }
    return 0;
}