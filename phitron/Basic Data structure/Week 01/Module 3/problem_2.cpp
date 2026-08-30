#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    vector<int> sum(n);
    sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        sum[i]=sum[i-1]+arr[i];
    }
    int ind=n/2;
    for(int i=0;i<=n/2;i++)
    {
        int left=sum[ind-1];
        int right=sum[n-1]-sum[ind];
        if(left==right)
        {
            cout << ind << endl;
            break;
        }
        else if(left<right)
        {
            ind++;
        }
        else if(left > right)
        {
            ind--;
        }
    }
    return 0;
}