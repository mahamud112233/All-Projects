#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b;
        cin >> b;
        char arr[b];
        for (int i = 0; i < b; i++)
        {
            cin >> arr[i];
        }
        int A = 0, B = 0;
        for (int i = 0; i < b - 1; i++)
        {
            if (arr[i] == 'A' && arr[i + 1] == 'A')
            {
                A++;
            }
            else if (arr[i] == 'B' && arr[i + 1] == 'B')
            {
                B++;
            }
        }
        if (arr[0] == 'A')
        {
            cout << A + 1 << " " << B << endl;
        }
        else
        {
            cout << A << " " << B << endl;
        }
    }
    return 0;
}