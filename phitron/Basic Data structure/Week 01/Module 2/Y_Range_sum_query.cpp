#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,q;
    cin >> n >> q;
    vector<long long int> arr(n+1);
    for(int i=1;i<n+1;i++)
    {
        cin >> arr[i];
    }
    vector <long long int> sum(n+1);
    sum[1]= arr[1];
    for (int i=2;i<n+1;i++)
    {
        sum[i]=sum[i-1]+arr[i];
    }
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        if(l==1)
        {
            cout << sum[r] << endl;
        }
        else 
        {
            cout << sum[r]-sum[l-1] << endl;
        }
    }
    return 0;
}