#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int valu;
    Node* next;
};
int main ()
{
    Node a,b,c;
    a.valu=10;
    b.valu=20;
    c.valu=30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.valu << endl;
    cout << (*a.next).valu << endl;
    cout << (*(*a.next).next).valu << endl;
    return 0;
}