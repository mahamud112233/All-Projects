#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 3, 4, 1, 5, 6, 8, 5, 6, 8, 9, 6, 4, 3};
    cout << l.front() << endl;
    cout << l.back() << endl;
    cout << *next(l.begin(), 6) << endl;
    cout << *l.begin() << endl;
    cout << *l.end() << endl; // wrong way
    return 0;
}