#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    vector<int> v;
    for(int i=0;i<s.size();i+=2)
    {
        string ss;
        ss+=s[i];
        v.push_back(stoi(ss));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout << v[i];
        if(i+1!=v.size())
        {
            cout << "+";
        }
    }
    return 0;
}