#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 3, 4, 1, 5, 6, 8, 5, 6, 8, 9, 6, 4, 3};
    l.remove(1);            // remove same value
    l.sort();               // sort ascending order
    l.sort(greater<int>()); // sort descending order
    l.unique();             // remove same another value(work only sorted)
    l.reverse();            // reverse the list
    for (int x : l)
    {
        cout << x << " ";
    }
    return 0;
}