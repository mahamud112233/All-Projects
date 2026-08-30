#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int valu;
    Node* next;
    Node(int valu)
    {
        this->valu=valu;
        this->next= NULL;
    }
};
int main ()
{
    Node a(10),b(20),c(30);
    

    a.next = &b;
    b.next = &c;
    

    cout << a.valu << endl;
    cout << a.next->valu << endl;
    cout << a.next->next->valu << endl;
    return 0;
}