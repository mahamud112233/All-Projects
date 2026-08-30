#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        char si[7];
        cin >> si;
        int a = 0, b = 0;
        for (int j = 0; j < 3; j++)
        {
            a += si[j] - '0';
        }
        for (int j = 3; j < 6; j++)
        {
            b += si[j] - '0';
        }
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}