#include <bits/stdc++.h>
using namespace std;
const int nn=1e7;
vector<int> prime(nn+1,0);
vector<int> ans(nn+1,0);
void do_prime(void)
{
    for(int i=2;i<=nn;i++)
    {
        if(!prime[i])
        for(int j=i;j<=nn;j+=i)
        {
            prime[j]++;
        }
    }
    for(int i=1;i<=nn;i++)
    {
        ans[i]=ans[i-1]+prime[i];
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    do_prime();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << ans[n] << '\n';
    }
    return 0;
}