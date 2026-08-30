#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == "0")
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                v[j] = "0";
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != "0")
            count++;
    }
    cout << count << endl;
    return 0;
}