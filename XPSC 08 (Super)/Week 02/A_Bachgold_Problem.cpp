#include <bits/stdc++.h>
using namespace std;
const int nn=100000;
vector<int> prime;
void do_prime(void)
{
    vector<int> v(nn+1,0);
    for(int i=2;i<=nn;i++)
    {
        if(!v[i])
        {
            prime.push_back(i);
            for(int j=i+i;j<=nn;j+=i)
            {
                v[j]++;
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
    int id=0;
    vector<int> ans;
    while(n!=0)
    {
        if(n-prime[id]!=1 && n-prime[id]>=0)
        {
            ans.push_back(prime[id]);
            n-=prime[id];
        }
        else id++;
    }
    cout << ans.size() << '\n';
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << ' ';
    }
    cout << '\n';
    return 0;
}