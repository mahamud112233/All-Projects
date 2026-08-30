#include<bits/stdc++.h>
using namespace std;
int main ()
{
    priority_queue<int> pq,pq1;
    pq.push(10);
    pq.pop();
    pq.size();
    pq.swap(pq1);
    pq.top();
    pq.empty();
    priority_queue<int,vector<int>,greater<int>> p,p1;
    p.push(6);
    p.pop();
    p.empty();
    p.size();
    p.swap(p1);
    p.top();
    return 0;
}