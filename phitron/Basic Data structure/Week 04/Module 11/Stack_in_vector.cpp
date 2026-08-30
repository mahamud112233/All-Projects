#include <bits/stdc++.h>
using namespace std;
class Mystack
{
public:
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    Mystack st;
    int a;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}