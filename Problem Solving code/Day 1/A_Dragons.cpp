#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    cin >>a >> b;
   vector<vector<int>> arr(b,vector<int>(2));
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin >> arr[i][j];
        }
    }
    sort(arr.begin(),arr.end());
    bool flag=true;
    for(int i=0;i<b;i++)
    {
        if(arr[i][0]<a)
        {
            a=a+arr[i][1];
        }
       else
       {
        flag=false;
        break;
       }
    }
    flag==true ? cout <<"YES" : cout << "NO";
    return 0;
}