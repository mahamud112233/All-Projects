#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    string s;
    int count=0;
    string undo;
    while(n--)
    {
        string a;
        cin >> a;
        if(a=="TYPE")
        {
            char b;
            cin >> b;
            s.push_back(b);
            count=0;
            undo.clear();
        }
        else if(a=="UNDO" && !s.empty())
        {
            undo.push_back(s.back());
            s.pop_back();
            count++;
        }
        else if(a=="REDO" && count>0)
        {
            s.push_back(undo.back());
            undo.pop_back();
            count--;
        }
    }
    cout << s << endl;
    return 0;
}