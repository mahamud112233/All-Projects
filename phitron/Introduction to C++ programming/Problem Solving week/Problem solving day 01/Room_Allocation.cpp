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
        int arr[b];
        for (int j = 0; j < b; j++)
        {
            cin >> arr[j];
        }
        int c = 0;
        for (int j = 0; j < b; j++)
        {

            if (arr[j] % 2 == 0)
            {
                c= c+(arr[j] / 2);
            }
            else
            {
                c= c+(arr[j]/2+1);
            }
        }
        cout << c << endl;
    }
    return 0;
}