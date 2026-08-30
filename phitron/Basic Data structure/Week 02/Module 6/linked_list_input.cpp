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
void print_linked_list(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->valu << " ";
        tem = tem->next;
    }
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int valu;
    while (1)
    {
        cin >> valu;
        if (valu == -1)
        {
            break;
        }
        insert_node_tail(head, tail, valu);
    }
    print_linked_list(head);
    return 0;
}