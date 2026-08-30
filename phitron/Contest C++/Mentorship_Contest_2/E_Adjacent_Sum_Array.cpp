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
        vector<int> b(n-1);
        for(int i=0;i<n-1;i++) cin >> b[i];
        sort(b.begin(),b.end());
        vector<int> a(n);
        
        a[0]=1;
        for(int i=0;i<n;i++)
        {
            if((i+1)<n)
            {
                a[i+1]=b[i]-a[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}