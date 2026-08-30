#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    set<int,greater<int>> s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for(auto x=s.begin();x!=s.end();x++)
    {
        cout << *x << " ";
    }
    return 0;
}