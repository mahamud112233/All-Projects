#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> v(a);
    v[0] = 0;
    for (int i = 1; i < a; i++)
    {
        cin >> v[i];
    }
    bool flag = false;
    int i = 1;
    while (1)
    {
        if (i == b)
        {
            flag = true;
            break;
        }
        else if (i < b)
        {
            i = i + v[i];
        }
        else if (i > b)
        {
            flag = false;
            break;
        }
    }
    flag == true ? cout << "YES" : cout << "NO";
    return 0;
}