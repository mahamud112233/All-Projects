#include<bits/stdc++.h>
using namespace std;
void fun(int b,char c)
{
    for(int j=0;j<b;j++)
    {
        cout << c << " ";
    }
    cout << endl;
}
int main ()
{
    int a;
    cin >> a;
    for (int i=0;i<a;i++)
    {
        int b;
        cin >> b;
        char c;
        cin >> c;
        fun(b,c);
    }
    return 0;
}