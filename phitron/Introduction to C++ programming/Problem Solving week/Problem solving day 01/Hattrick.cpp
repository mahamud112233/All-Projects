#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        char arr[6];
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[j];
        }
        int flag = 0;
        for (int j = 0; j < 6; j++)
        {
            if (arr[j] == 'W' && arr[j] == arr[j + 1] && arr[j] == arr[j + 2])
            {
                flag = 1;
                break;
            }
        }
        flag == 1 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}