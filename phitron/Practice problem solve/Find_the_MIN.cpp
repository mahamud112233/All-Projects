#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    priority_queue<int,vector<int>, greater<int>> s;
    while (t--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int nu;
            cin >> nu;
            s.push(nu);
        }
        else if (a == 2)
        {
            if (s.empty())
            {
                cout << "empty\n";
            }
            else
            {
                cout << s.top() << "\n";
                int f=s.top();
                while(!s.empty() && f==s.top())
                {
                    s.pop();
                }
                
            }
        }
    }
    return 0;
}