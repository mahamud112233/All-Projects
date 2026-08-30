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
void insert_any_position(Node *&head, Node *&tail, int pos, int valu)
{
    Node *n = new Node(valu);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    if (pos == 0)
    {
        n->next = head;
        head->prev = n;
        head = n;
        return;
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
    else if(i>pos)
    {
        return;
    }
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

    insert_any_position(head, tail,5, 100);
    print_forward(head);
    return 0;
}