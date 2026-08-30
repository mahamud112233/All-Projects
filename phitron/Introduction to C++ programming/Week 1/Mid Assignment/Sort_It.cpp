#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    int arr[a];
    int brr[a];
    for (int i=0;i<a;i++)
    {
        cin >> arr[i];
    }
    for (int i=0;i<a;i++)
    {
        brr[i]=arr[i];
    }
    sort (arr,arr+a);
    for (int i=0;i<a;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort (brr,brr+a,greater<int>());
    for (int i=0;i<a;i++)
    {
        cout << brr[i] << " ";
    }

    return 0;
}