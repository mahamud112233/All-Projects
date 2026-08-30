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

    head->next = a;
    a->next = b;
    b->next = c;

    insert_node_head(head, 100);
    insert_node_head(head, 200);
    insert_node_head(head, 300);
    insert_node_head(head, 400);
    print_linked_list(head);

    return 0;
}