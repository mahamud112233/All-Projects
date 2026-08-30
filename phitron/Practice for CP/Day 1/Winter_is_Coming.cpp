#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b;
        cin >> n >> a >> b;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        int count=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<a && flag==0)
            {
                count++;
                flag=1;
            }
            else if(v[i]>b && flag==1)
            {
                flag=0;
            }
        }
        cout << count << endl;
    }
    return 0;
}