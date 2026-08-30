#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int n, d;
        cin >> n >> d;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int count = 0;
        int c = arr[0];
        for (int j = 0; j < n; j++)
        {
            if (c <= d)
            {
                if (arr[j] > d)
                {
                    count++;
                    c = arr[j];
                }
                else
                {
                    c = arr[j];
                }
            }
            else
            {
                if (arr[j] <= d)
                {
                    count++;
                    c = arr[j];
                }
                else
                {
                    c = arr[j];
                }
            }
        }
        if(arr[0]>d)
        {
            cout << count+1 << endl;
        }
        else 
        {
            cout << count << endl;
        }
    }
    return 0;
}