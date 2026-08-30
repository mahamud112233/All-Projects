#include<bits/stdc++.h>
using namespace std;
int main ()
{
    stack<int> st;
    int a;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    stack<int> tem;
    while(!st.empty())
    {
        tem.push(st.top());
        st.pop();
    }
    while(!tem.empty())
    {
        cout << tem.top() << " ";
        tem.pop();
    }
    return 0;
}