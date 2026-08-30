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
void insert_tail(Node *&head, Node *&tail, int valu)
{
    Node *n = new Node(valu);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    n->prev = tail;
    tail = n;
}
void print_forward(Node* head)
{
    Node* tem= head;
    while(tem!=NULL)
    {
        cout << tem->valu << " ";
        tem= tem->next;
    }
    cout << endl;
}
void reverse(Node* &head,Node* &tail)
{
    Node *tem = head;
    while(tem!=NULL)
    {
        Node* o=tem->prev;
        tem->prev=tem->next;
        tem->next=o;
        tem=tem->prev;
    }
    Node* t=head;
    head = tail;
    tail = t;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_tail(head, tail, x);
    }
    reverse(head,tail);
    print_forward(head);
    return 0;
}