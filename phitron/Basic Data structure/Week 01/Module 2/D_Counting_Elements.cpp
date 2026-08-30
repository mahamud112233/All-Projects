#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n ;i++)
    {
        cin >> arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        int x=arr[i]+1;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==x)
            {
                count++;
                break;
            }
        }
    }
    cout << count ;
    return 0;
}