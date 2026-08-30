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
        vector<int> v(n*3);
        int a=n*3;
        for(int i=0;i<n*3;i++)
        {
            if(i%3==2) continue;
            v[i]=a;
            a--;
        }
    
        for(int i=2;i<n*3;i+=3)
        {
            v[i]=a;
            a--;
        }
        for(int x:v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}