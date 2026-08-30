#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int c,v,b;
        cin >> c >> v >> b;
        vector<int> ar(c);
        for(int i=0;i<c;i++) cin >> ar[i];
        sort(ar.begin(),ar.end());
        int sum=0;
        for(int i=0;i<c-1;i++) sum+=ar[i];
        if((sum+b)>(v+ar[c-1])) cout << "Varun" << endl;
        else if((sum+b)<(v+ar[c-1])) cout << "Ved" << endl;
        else cout << "Equal" << endl;
    }
    return 0;
}