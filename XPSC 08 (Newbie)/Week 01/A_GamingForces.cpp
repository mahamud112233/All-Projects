#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int c=0;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]==1)
            {
                c++;
            }
        }
        int ans=(n-c)+(c/2)+(c%2);
        cout << ans << endl;
    }
    return 0;
}