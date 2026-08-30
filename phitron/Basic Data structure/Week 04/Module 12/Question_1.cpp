#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q, q2;
    stack<int> st;

    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int val;
        cin >> val;
        q.push(val);
        st.push(val);
    }
    
    while (!st.empty())
    {
       q2.push(st.top());
        st.pop();
    }
    while(!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }
    return 0;
}