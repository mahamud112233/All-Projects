#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector<long long int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    vector<long long int> psum(n);
    psum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        psum[i]=psum[i-1]+arr[i];
    }
    reverse (psum.begin(),psum.end());
    for(int i=0;i<n;i++)
    {
        cout << psum[i] << " ";
    }
    return 0;
}