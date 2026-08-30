#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b, c;
        cin >> b >> c;
        int arr[b];
        for (int j = 0; j < b; j++)
        {
            cin >> arr[j];
        }
        int flag = 0;
        for (int j = 0; j < b - 2; j++)
        {
            for (int k = j + 1; k < b - 1; k++)
            {
                for (int l = k + 1; l < b; l++)
                {
                    int sum = arr[j] + arr[k] + arr[l];
                    if (sum == c)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if (flag == 1)
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