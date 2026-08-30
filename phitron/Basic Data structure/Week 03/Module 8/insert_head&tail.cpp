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
void intsert_head(Node *&head, Node *&tail, int valu)
{
    Node *n = new Node(valu);
    if(head==NULL)
    {
        head=n;
        tail=n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    intsert_head(head, tail, 100);
    intsert_head(head, tail, 200);

    insert_tail(head, tail, 400);
    insert_tail(head, tail, 500);

    print_forward(head);
    return 0;
}