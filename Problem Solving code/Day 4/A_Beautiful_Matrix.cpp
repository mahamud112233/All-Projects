#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr(5, vector<int>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    int a = 0, b = 0;
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                a = i;
                b = j;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    int operation = abs(2 - a) + abs(2 - b);
    cout << operation << endl;
    return 0;
}