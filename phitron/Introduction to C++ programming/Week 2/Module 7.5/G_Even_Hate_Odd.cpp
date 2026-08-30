#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int b;
        cin >> b;
        int arr[b];
        for (int j = 0; j < b; j++)
        {
            cin >> arr[j];
        }
        if (b % 2 == 0)
        {
            int c = 0, d = 0;
            for (int j = 0; j < b; j++)
            {
                arr[j] % 2 == 0 ? c++ : d++;
            }
            if (c == d)
            {
                cout << "0" << endl;
            }
            else
            {
                c > d ? cout << (b / 2) - d << endl : cout << (b / 2) - c << endl;
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}