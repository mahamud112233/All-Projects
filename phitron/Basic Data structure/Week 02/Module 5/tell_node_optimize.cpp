#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int valu;
    Node *next;
    Node(int valu)
    {
        this->valu = valu;
        this->next = NULL;
    }
};
void insert_node_head(Node *&head, int valu)
{
    Node *n = new Node(valu);
    n->next = head;
    head = n;
}
void insert_node_tail(Node *&head, Node *&tail, int valu)
{
    Node *n = new Node(valu);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    tail = n;
}
void print_linked_list(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->valu << endl;
        tem = tem->next;
    }
}
int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->next = b;
    b->next = c;

    insert_node_head(head, 6000);
    insert_node_tail(head, tail, 100);
    insert_node_tail(head, tail, 200);
    insert_node_head(head, 1800);
    insert_node_tail(head, tail, 300);
    insert_node_tail(head, tail, 400);
    print_linked_list(head);

    return 0;
}