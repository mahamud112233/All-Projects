#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    string s;
    getline(cin,str);
    cin >> s;
    
    stringstream ss(str);
    string word;
    int a=0;
    while(ss >> word) 
    {
        if(word == s)
        {
            a++;
        }
    }
    cout << a << endl;
    return 0;
}