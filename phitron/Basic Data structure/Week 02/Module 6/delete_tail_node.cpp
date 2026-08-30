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
void delete_head_node(Node *&head)
{
    Node *delete_note = head;
    head = head->next;
    delete delete_note;
}
void delete_any_node_tail(Node *head, Node *&tail, int idx)
{
    Node *tem = head;
    for (int i = 1; i < idx-1; i++)
    {
        tem = tem->next;
    }
    Node *delete_node = tem->next;
    tem->next = tem->next->next;
    delete delete_node;
    tail = tem;
}
void delete_tail_node(Node *head)
{
    Node *tem = head;
    while (tem->next->next != NULL)
    {
        tem = tem->next;
    }
    Node *delete_node = tem->next;
    tem->next = NULL;
    delete delete_node;
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
    cout << "Before delete tail "<< tail->valu << endl;
    delete_any_node_tail(head, tail, 5);
    print_linked_list(head);
    cout << endl << "After delete tail " << tail->valu ;
    return 0;
}