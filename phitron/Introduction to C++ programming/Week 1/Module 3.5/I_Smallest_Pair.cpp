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
        int arr[b + 1];
        for (int j = 1; j < b + 1; j++)
        {
            cin >> arr[j];
        }
        int chek = INT_MAX;
        for (int n = 1; n < b; n++)
        {
            for (int m = n + 1; m <= b; m++)
            {
                int sum;
                sum = (arr[n] + arr[m] + m) - n;
                if (chek > sum)
                {
                    chek = sum;
                }
            }
        }
        cout << chek << endl;
    }
    return 0;
}