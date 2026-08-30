#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int x;
    while (cin >> x && x != -1)
        l.push_back(x);

    l.sort();
    for (int c : l)
        cout << c << " ";

            return 0;
}