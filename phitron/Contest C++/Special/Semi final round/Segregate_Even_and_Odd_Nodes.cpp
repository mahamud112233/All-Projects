#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    list<int> l;
    while (n--)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }
    if (l.empty())
        return 0;
    queue<int> q1, q2;
    for (int x : l)
    {
        if (x % 2 == 0)
        {
            q1.push(x);
        }
        else
        {
            q2.push(x);
        }
    }
    list<int> l1;
    while (!q1.empty())
    {
        l1.push_back(q1.front());
        q1.pop();
    }
    while (!q2.empty())
    {
        l1.push_back(q2.front());
        q2.pop();
    }
    for (int x : l1)
    {
        cout << x << " ";
    }
    return 0;
}