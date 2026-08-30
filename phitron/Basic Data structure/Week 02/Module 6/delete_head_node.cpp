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
void insert_node_tail(Node *&head, Node *&tail, int valu)
{
    Node *n = new Node(valu);
    if (head == NULL)
    {
        head = n;
        tail = n;
    }
    tail->next = n;
    tail = n;
}
void print_linked_list(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->valu << " ";
        tem = tem->next;
    }
}
void linked_list_reverse_print(Node *tem)
{
    if (tem == NULL)
    {
        return;
    }
    linked_list_reverse_print(tem->next);
    cout << tem->valu << " ";
}
void delete_head_node(Node* &head)
{
    Node* delete_note= head;
    head= head->next;
    delete delete_note;
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
    delete_head_node(head);
    print_linked_list(head);
    return 0;
}