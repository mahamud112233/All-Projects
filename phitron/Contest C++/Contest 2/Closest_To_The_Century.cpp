#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b;
        cin >> b;
        int arr[b];
        for (int i=0;i<b;i++)
        {
            cin >> arr[i];
        }
        int c=0;
        for (int i=0;i<b;i++)
        {
            if(c<arr[i])
            {
                c=arr[i];
            }
        }
        cout << c << endl;
    }
    return 0;
}