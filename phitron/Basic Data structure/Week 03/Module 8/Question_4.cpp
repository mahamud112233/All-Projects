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
void print_backward(Node *tail)
{
    Node *tem = tail;
    while (tem != NULL)
    {
        cout << tem->valu << " ";
        tem = tem->prev;
    }
    cout << endl;
}
int insert_any_position(Node *&head, Node *&tail, int pos, int valu)
{
    Node *n = new Node(valu);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return 1;
    }
    if (pos == 0)
    {
        n->next = head;
        head->prev = n;
        head = n;
        return 1;
    }
    Node *tem = head;
    int i = 1;
    while (tem->next != NULL)
    {
        if (i == pos)
        {
            break;
        }
        tem = tem->next;
        i++;
    }
    if (i < pos)
    {
        return 0;
    }
    if (tem->next == NULL && i == pos)
    {
        tail->next = n;
        n->prev = tail;
        tail = n;
    }
    else if (tem->next != NULL && i == pos)
    {
        n->next = tem->next;
        tem->next->prev = n;
        tem->next = n;
        n->prev = tem;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int valu, pos;
        cin >> pos >> valu;

        int a = insert_any_position(head, tail, pos, valu);
        if (a == 0)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            print_forward(head);
            print_backward(tail);
        }
    }
    return 0;
}