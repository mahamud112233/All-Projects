#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >>a ;
    while(a--)
    {
        int b;
        cin >> b;
        int c=0;
        for(int i=0;i>-1;i+=2)
        {
            if(b==1 || b==3)
            {
                break;
            }
            if(b==(2+i) || b==(5+i))
            {
                c=2+(i/2);
                break;
            }
        }
        if (c==0)
        {
            cout << "1" << endl;
        }
        else 
        {
            cout << c << endl;
        }
    }
    return 0;
}