#include<bits/stdc++.h>
using namespace std;
vector<int> fun (vector<int> a,vector<int> b,int n)
{
    vector <int> c(n+n);
    for(int i=0;i<n;i++)
    {
        c[i]=b[i];
    }
    for (int i=0;i<n;i++)
    {
        c[i+n]= a[i];
    }
    return c;

}
int main ()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for ( int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    vector<int> c = fun( a,b,n);
    
    for (int i=0;i<2*n;i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}