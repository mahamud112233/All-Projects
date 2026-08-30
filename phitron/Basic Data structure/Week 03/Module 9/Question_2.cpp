#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int> l;
    int x;
    while (cin >> x && x != -1)

        l.push_back(x);
        reverse(l.begin(),l.end());

        for(int v:l)
        {
            cout << v << " ";
        }
    return 0;
}