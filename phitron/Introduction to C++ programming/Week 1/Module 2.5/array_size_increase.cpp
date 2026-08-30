#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int *arr = new int[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int b;
    cin >> b;
    int *brr = new int[b];
    for (int i = 0; i < a; i++)
    {
        brr[i]=arr[i];
    }
    delete[] arr;
    for(int i=a;i<b;i++)
    {
        cin >> brr[i];
    }
    for( int i=0;i<b;i++)
    {
        cout << brr[i] << " ";
    }
    return 0;
}