#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int n, c;
        cin >> n >> c;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int cnt = 0;
        int mi = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] >= c)
            {
                cnt++;
                if (arr[j] % c < mi)
                {
                    mi = arr[j] % c;
                }
            }
        }
        if (cnt > 0)
        {
            cout << mi << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}