#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l, l2;
    int x;
    while (cin >> x && x != -1)

        l.push_back(x);

    while (cin >> x && x != -1)

        l2.push_back(x);

    auto it1=l.begin();
    auto it2=l2.begin();
    bool flag= true;
    while(it1!=l.end() || it2!=l2.end())
    {
        if( (it1==l.end() && it2!=l2.end()) || (it1!=l.end() && it2==l2.end()))
        {
            flag=false;
            break;
        }
        else if(*it1!=*it2 )
        {
            flag=false;
            break;
        }
        it1++;
        it2++;
    }
    flag == true ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
