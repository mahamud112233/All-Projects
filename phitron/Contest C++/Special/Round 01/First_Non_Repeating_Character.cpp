#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> arr(26);
    for (char ch : s)
    {
        arr[ch - 'a']++;
    }

    for (char ch : s)
    {
        if (arr[ch - 'a'] == 1)
        {
            cout << ch << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}