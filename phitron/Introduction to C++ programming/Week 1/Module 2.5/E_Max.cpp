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
    int c=INT_MIN;
    for (int i=0;i<a;i++)
    {
        c=max(c,arr[i]);
    }
    cout << c;
    return 0;
}