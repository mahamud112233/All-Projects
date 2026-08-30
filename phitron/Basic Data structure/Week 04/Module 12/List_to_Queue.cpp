#include<bits/stdc++.h>
using namespace std;
class myQueue
{
    public:
    list<int> st;
    void push(int val)
    {
        st.push_back(val);
    }
    void pop()
    {
        st.pop_front();
    }
    int front()
    {
       return st.front();
    }
    int back()
    {
        return st.back();
    }
    int size()
    {
        return st.size();
    }
    bool empty()
    {
        return st.empty();
    }
};
int main ()
{
     myQueue q;
    int a;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}