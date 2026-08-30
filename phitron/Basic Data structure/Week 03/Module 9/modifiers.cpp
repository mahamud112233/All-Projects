#include <bits/stdc++.h>
using namespace std;
int main()
{
    // copy
    list<int> l = {1, 2, 3, 4};
    list<int> l2;
    l2 = l;
    // l2.assign(l.begin(),l.end());
    for (int x : l2)
    {
        cout << x << " ";
    }
    cout << endl;

    // inser head or tail
    l2.push_front(100);
    l2.push_back(200);
    for (int x : l2)
    {
        cout << x << " ";
    }
    cout << endl;

    // delete head or tail
    l.pop_front();
    l.pop_back();
    for (int x : l)
    {
        cout << x << " ";
    }

    // access a index value(index=5)
    cout << endl
         << *next(l2.begin(), 5) << endl;

    // insert any position a value
    l.insert(next(l.begin(), 0), 200);
    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;

    // insert a list or vector or array
    l.insert(next(l.begin(), 0), l2.begin(), l2.end());
    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;

    // erase
    l.erase(next(l.begin(), 4));                     // single value erase
    l.erase(next(l.begin(), 1), next(l.begin(), 7)); // multiple value erase
    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;

    // replace
    replace(l.begin(), l.end(), 100, 500);
    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;

    //find
    auto it=find(l.begin(),l.end(),500);
    if(it == l.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    
    return 0;
}