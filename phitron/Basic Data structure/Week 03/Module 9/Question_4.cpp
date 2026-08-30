#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int> l;
    int q;
    cin >> q;
    for (int i=0;i<q;i++)
    {
        int pos,valu;
        cin >> pos >> valu;
        if(l.size()>=pos)
        {
             l.insert(next(l.begin(), pos), valu);
             for(int c:l)
             {
                cout << c << " ";
             } cout << endl;
             for(auto it=l.rbegin();it!=l.rend();it++)
             {
                cout << *it << " ";
             }cout << endl;
        }
        else 
        {
            cout << "Invalid" << endl;
        }
       
    }
    return 0;
}