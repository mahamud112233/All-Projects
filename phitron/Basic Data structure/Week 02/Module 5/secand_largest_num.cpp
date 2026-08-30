#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = INT_MIN, b = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > a)
        {
            b = a;
            a = arr[i];
        }
        else if (arr[i] < a && b < arr[i])
        {
            b = arr[i];
        }
    }
    if (b == INT_MIN || n == 1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << b;
    }
    return 0;
}