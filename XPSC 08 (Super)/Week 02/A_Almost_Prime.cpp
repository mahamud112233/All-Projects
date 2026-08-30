#include <bits/stdc++.h>
using namespace std;
const int nn=3000;
vector<int> almost_prime(nn+1,0);
void do_prime(void)
{
    for(int i=2;i<=nn+1;i++)
    {
        if(!almost_prime[i])
        {
            for(int j=i+i;j<=nn;j+=i)
            {
                almost_prime[j]++;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    do_prime();
    int n;
    cin >> n;
    int ans=0;
    for(int i=2;i<=n;i++)
    {
        if(almost_prime[i]==2)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}