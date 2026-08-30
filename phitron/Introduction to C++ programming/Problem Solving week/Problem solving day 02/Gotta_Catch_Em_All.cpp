#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    while(a--)
    {
        int b,c,d;
        cin >> b >> c >> d;
        int arr[b];
        for (int i=0;i<b;i++)
        {
            cin >> arr[i];
        }
        int sum=0;
        for(int i=0;i<b;i++)
        {
            if(arr[i]*c>d)
            {
                sum+=d;
            }
            else
            {
                sum+=arr[i]*c;
            }
        }
        cout << sum << endl;
    }
    return 0;
}