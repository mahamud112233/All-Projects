#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b,c;
        cin >> b >> c;
        int arr[b];
        for(int i=0;i<b;i++)
        {
            cin >> arr[i];
        }
        long long int lit=0;
        for (int i=0;i<b;i++)
        {
            lit+=arr[i];
        }

        lit%c==0 ? cout << lit/c << endl : cout << (lit/c)+1 << endl;
    }
    return 0;
}