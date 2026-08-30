#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
     for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if(n==m )
    {
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if( st.top()== q.front())
            {
                st.pop();
                q.pop();
            }
            else
            {
                flag=false;
                break;
            }
        }
        flag==true? cout << "YES" : cout << "NO";
    } 
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}