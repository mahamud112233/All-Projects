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
    Mystack st1;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    Mystack st2;
    int b;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    if (st1.size() == st2.size())
    {
        bool flag = true;
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            else
            {
                st1.pop();
                st2.pop();
            }
        }
        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}