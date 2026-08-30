#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a ;
    while(a--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for(char x:s)
        {
            if(st.empty()==true)
            {
                st.push(x);
            }
            else if(!st.empty() && ((x=='0' && st.top()=='1')) || x=='1' && st.top()=='0')
            {
                st.pop();
            }
            else
            {
                st.push(x);
            }
        }
        st.empty()==true ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}