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
int insert_node_any(Node *&head, Node *&tail, int idx, int valu)
{
    Node *tem = head;
    if (idx == 0)
    {
        Node *n = new Node(valu);

        n->next = head;
        head = n;
        return 1;
    }
    for (int i = 1; i < idx; i++)
    {
        tem = tem->next;
        if (tem == NULL)
        {

            return 0;
        }
    }
    if (tem->next != NULL)
    {
        Node *n = new Node(valu);
        n->next = tem->next;
        tem->next = n;
    }
    else
    {
        // Node* n= new Node(valu);
        // n->next=tem->next;
        // tem->next=n;
        // tail=n;
        insert_node_tail(head, tail, valu);
    }
    return 1;
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
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int idx, valu;
        cin >> idx >> valu;
        int no = insert_node_any(head, tail, idx, valu);
        if (no == 1)
        {
            print_linked_list(head);
            cout << endl;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}