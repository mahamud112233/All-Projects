#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    for (int i=0;i<a;i++)
    {
        int b;
        cin >> b;
        string si;
        cin >> si;
        int arr[26]={0};
        for (int j=0;j<b;j++)
        {
            arr[si[j]-'A']++;
        }
        int c=0;
        for (int j=0;j<26;j++)
        {
            if (arr[j]==1)
            {
                c=c+2;
            }
            else if (arr[j]>1) 
            {
                c=c+1+arr[j];
            }
        }
        cout << c << endl;
    }
    return 0;
}