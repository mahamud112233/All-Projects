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
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);

    head->next= a;
    a->next= b;
    
    cout << head->valu << endl;
    cout << head->next->valu << endl;
    cout << head->next->next->valu << endl;
    return 0;
}