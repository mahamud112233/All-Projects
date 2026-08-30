#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<char> de;
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            de.push_back(x);
        }
        while (1)
        {
            if (!de.empty() && de.front() != de.back())
            {
                de.pop_front();
                de.pop_back();
            }
            else
            {
                break;
            }
        }
        cout << de.size() << endl;
    }
    return 0;
}