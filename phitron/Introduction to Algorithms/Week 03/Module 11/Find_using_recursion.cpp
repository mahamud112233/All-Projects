#include<bits/stdc++.h>
using namespace std;
int leader[100];
int find(int node)
{
    if(leader[node]==-1)
        return node;
    int ld=find(leader[node]);
    leader[node]=ld;
        return ld;
}
int main ()
{
    memset(leader,-1,sizeof(leader));
    leader[4]=5;
    leader[5]=3;
    leader[3]=1;
    leader[2]=1;
    leader[0]=1;

    cout << find(4) << endl;
    return 0;
}