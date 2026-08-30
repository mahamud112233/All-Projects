#include <bits/stdc++.h>
using namespace std;
const int nn = 1e5;
vector<int> fre(nn+1,0);
void do_prime(void)
{
   int ans=0;
    for (int i = 2; i <= nn; i++)
    {
        int co=0;
        {
           for(int j=i;j<=nn;j+=i)
           {
                co+=fre[j];
           }
        }
        ans=max(ans,co);
    }
    cout << max(ans,1) << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        fre[x]++;
    }
    do_prime();
    return 0;
}