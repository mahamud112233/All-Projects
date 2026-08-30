#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> s1(n), s2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> s1[i];
    }
    for (int i = 0; i < m ; i++)
    {
        cin >> s2[i];
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    int count = 0,i=0,j=0;
    while(i<n && j<m)
    {
        if(s1[i]-k>s2[j])
        {
            j++;
        }
        else if(s1[i]+k<s2[j])
        {
            i++;
        }
        else
        {
            count++;
            j++;
            i++;
        }
    }
    cout << count << endl;
    return 0;
}