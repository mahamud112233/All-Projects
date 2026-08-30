#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> l;
    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
            break;
        l.push_back(s);
    }
    int q;
    cin >> q;
    auto it = l.begin();
    while (q--)
    {
        string sa;
        cin >> sa;

        if (sa == "visit")
        {
            string s2;
            cin >> s2;
            auto i = find(l.begin(), l.end(), s2);
            if (i == l.end())
                cout << "Not Available" << endl;
            else
            {
                it = i;
                cout << *it << endl;
            }
        }
        else if (sa == "next")
        {
            auto t=it;
            if (++t != l.end())
            {
                it++;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (sa == "prev")
        {

            if (it != l.begin())
            {
                it--;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}