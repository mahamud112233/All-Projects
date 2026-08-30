#include <bits/stdc++.h>
using namespace std;
const int nn=1e6;
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
                v[j]=1;
            }
        }
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
        bool ff=true;
        int f=0,l=0;
        for(int i=0;i<prime.size();i++)
        {
            if(ff && n+1<=prime[i])
            {
                f=prime[i];
                ff=false;
            }
            else if(!ff && f+n<=prime[i])
            {
                l=prime[i];
                break;
            }
        }
        cout << 1LL*f*l << '\n';
    }
    return 0;
}