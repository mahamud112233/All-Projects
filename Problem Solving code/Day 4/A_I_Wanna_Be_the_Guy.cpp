#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int l;
    cin >> l;
    vector<int> vl(l+1,0);
    int xl;
    cin >> xl;
    vector<int> xv(xl);
    for(int i=0;i<xl;i++)
    {
        cin >> xv[i];
        vl[xv[i]]=xv[i];
    }
    int yl;
    cin >> yl;
    vector<int> yv(yl);
    for(int i=0;i<yl;i++)
    {
        cin >> yv[i];
         vl[yv[i]]=yv[i];
    }
    int flag=1;
    for(int i=1;i<l+1;i++)
    {
        if(vl[i]==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}