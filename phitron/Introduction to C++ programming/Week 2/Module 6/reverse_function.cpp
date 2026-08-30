#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i=0;i<a;i++)
    {
        cin >> arr[i];
    }
    reverse(arr, arr+a);// reverse function for every array(int ,char).
    for (int i=0;i<a;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}