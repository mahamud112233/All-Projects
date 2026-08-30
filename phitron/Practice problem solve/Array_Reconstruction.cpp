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
        int arr[n-2];
        long long int sum=0;
        for(int i=0;i<n-2;i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        long long int s;
        cin >> s;
        cout << (s-sum)+1 << "\n";
    }
    return 0;
}