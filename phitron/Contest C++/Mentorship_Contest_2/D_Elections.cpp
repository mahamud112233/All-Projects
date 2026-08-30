#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> vA(n), vB(n);
        for (int i = 0; i < n; i++)
            cin >> vA[i];
        for (int i = 0; i < n; i++)
            cin >> vB[i];
        int sumA = 0, sumB = 0;
        vector<int> chef;
        for (int i = 0; i < n; i++)
        {
            if (vA[i] > vB[i])
            {
                sumA++;
            }
            else
            {
                sumB++;
                chef.push_back(vB[i] - vA[i]);
            }
        }

        if (sumA > sumB)
        {
            cout << "YES" << endl;
            continue;
        }
        sort(chef.begin(), chef.end());
        for (int i = 0; i < chef.size(); i++)
        {
            if ((chef[i] + 1) <= x)
            {
                sumA++;
                x -= (chef[i] + 1);
                sumB--;
            }
            else
            {
                break;
            }
        }
        if (sumA > sumB)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}