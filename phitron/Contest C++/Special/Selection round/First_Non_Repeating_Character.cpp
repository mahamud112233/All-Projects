#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    vector<int> arr(26);
    for(int i=0;i<s.size();i++)
    {
        arr[s[i]-'a']++;
    }
    int x=-1;
    for(int i=0;i<s.size();i++)
    {
        if( arr[s[i]-'a']==1)
        {
            x=i;
            break;
        }
    }
    if(x==-1)
    {
        cout << x << endl;
    }
    else
    {
        cout << s[x] << endl;
    }
    return 0;
}