#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i=0;i<a;i++)
    {
        cin>> arr[i];
    }
    int flag=1;
    for(int i=0,j=a-1;i<=j;i++,j--)
    {
        if (arr[i]!=arr[j])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout <<"YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}