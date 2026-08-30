#include<bits/stdc++.h>
using namespace std;
int leader[100];
int gp_size[100];
int find(int node)
{
    if(leader[node]==-1)
        return node;
    int ld=find(leader[node]);
    leader[node]=ld;
        return ld;
}
void dsu_union(int n1,int n2)
{
    int l1=find(n1);
    int l2=find(n2);

    if(gp_size[l1]>=gp_size[l2])
    {
        leader[l2]=l1;
        gp_size[l1]+=gp_size[l2];
    }
    else
    {
        leader[l1]=l2;
        gp_size[l2]+=gp_size[l1];
    }
}
int main ()
{
    memset(leader,-1,sizeof(leader));
    memset(gp_size,1,sizeof(gp_size));

    dsu_union(1,2);
    dsu_union(0,2);
    dsu_union(1,3);

   for(int i=0;i<6;i++)
   {
    cout << i << "->leader " << leader[i] << endl;
   }
    return 0;
}