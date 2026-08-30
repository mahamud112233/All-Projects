#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(5, 10);
    cout << l.size() << endl;
    cout << l.max_size() << endl;
    // l.clear();
    cout << l.size() << endl;
    if(l.empty())
    {
         cout << "empty" << endl;
    }
    l.resize(10,100);//value set korle extra size te value insert hobe 
    for(int x : l)
    {
         cout << x << " ";
    }
    return 0;
}