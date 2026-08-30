#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int valu;
    Node *next;
    Node *prev;
    Node(int valu)
    {
        this->valu = valu;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forward(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->valu << " ";
        tem = tem->next;
    }
    cout << endl;
}
void insert_tail(Node *&head, Node *&tail, int valu)
{
    Node *n = new Node(valu);
      if(head==NULL)
    {
        head=n;
        tail=n;
        return;
    }
    tail->next = n;
    n->prev = tail;
    tail = n;
}
void sort_linked_list(Node* head,Node* tail)
{
    for(Node* tem=head;tem->next!=tail;tem=tem->next)
    {
        for(Node* tem1=tem;tem1->next!=NULL;tem1=tem1->next)
        {
            if(tem->valu>tem1->valu)
            {
                swap(tem->valu,tem1->valu);
            }
        }
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(1)
    {
        int valu;
        cin >> valu;
        if(valu==-1)
        {
            break;
        }
        insert_tail(head,tail,valu);
    }
   sort_linked_list(head,tail);
   print_forward(head);
    return 0;
}