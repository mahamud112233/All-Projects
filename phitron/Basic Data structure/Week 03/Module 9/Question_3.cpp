#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int x;
    while (cin >> x && x != -1)

        l.push_back(x);
    auto it1 = l.begin();
    auto it2 = l.end();
    it2--;
    bool flag = true;
    while (it1 != it2)
    {
        if (*it1 != *it2)
        {
            flag = false;
            break;
        }
        it1++;
        if (it1 == it2)
            break;
        it2--;
    }
    flag == true ? cout << "YES\n" : cout << "NO\n";

    return 0;
}