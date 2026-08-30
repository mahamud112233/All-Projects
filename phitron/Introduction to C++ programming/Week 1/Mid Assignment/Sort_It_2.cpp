#include<bits/stdc++.h>
using namespace std;
int* sort_it(int a)
{
    int* arr = new int[a];
    for (int i=0;i<a;i++)
    {
        cin>> arr[i];
    }
    sort(arr,arr+a,greater<int>());
    return arr;
}
int main ()
{
    int a;
    cin >> a;
    
    int* p=sort_it(a);
    for (int i=0;i<a;i++)
    {
        cout << p[i] <<" ";
    }
    return 0;
}