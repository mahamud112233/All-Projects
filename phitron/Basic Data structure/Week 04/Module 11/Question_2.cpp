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
    for(int i=0;i<a;i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
     vector<int> st2;
    int b;
    cin >> b;
    for(int i=0;i<b;i++)
    {
        int x;
        cin >> x;
        st2.push_back(x);
    }
    if(st1.size()==st2.size())
    {
        bool flag=true;
        for(int i=0;i<b;i++)
        {
            if(st1.top()==st2[i])
            {
                st1.pop();
            }
            else if(st1.top()!=st2[i])
            {
                flag=false;
                break;
            }
        }
        flag==true? cout << "YES" << endl:cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}