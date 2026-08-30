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
    Node* c= new Node (40);

    head->next= a;
    a->next= b;
    b->next= c;
    
    
    Node* tem= head;
    while(tem!=NULL)
    {
        cout<< tem->valu << endl;
        tem=tem->next;
    }
    return 0;
}