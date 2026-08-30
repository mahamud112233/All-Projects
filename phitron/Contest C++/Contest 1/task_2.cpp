#include<bits/stdc++.h>
using namespace std;
int fun(int c)
{
    if(c<3)
    {
        return 0;
    }
    int count= c/3;
    int reminder=c%3;
    int total=count+reminder;
    
    return count+fun(total);
}
int main ()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b;
        cin >> b;
        int c=b/5;
        int n=c+fun(c);
       
        
        cout << n << endl;
    }
    return 0;
}