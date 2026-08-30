#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int a, b;
        cin >> a >> b;
        stack<int> MY_STACK, tem;
        while (a--)
        {
            int c;
            cin >> c;
            MY_STACK.push(c);
        }
        while (!MY_STACK.empty())
        {
            tem.push(MY_STACK.top());
            MY_STACK.pop();
        }
        tem.push(b);
        MY_STACK=tem;
        while (!MY_STACK.empty())
        {
            cout << MY_STACK.top() << " ";
            MY_STACK.pop();
        }
        cout << endl;
    }

    return 0;
}