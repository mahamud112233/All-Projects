#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin  >> a;
        vector<char> ar={'a','e','i','o','u'};
        string s;
        int i=0;
        while(a--)
        {
            s.push_back(ar[i]);
            i++;
            if(i==5)
            {
                i=0;
            }
        }
        sort(s.begin(),s.end());
        cout << s << endl;
    }
    return 0;
}