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
void delete_any_position(Node *&head, Node *&tail, int pos)
{
    Node *deletenode = head;
    if (head == NULL && tail == NULL)
    {
        return;
    }
    if (head == tail)
    {
        delete deletenode;
        head = NULL;
        tail = NULL;
        return;
    }
    if (pos == 0)
    {
        head = head->next;
        head->prev = NULL;
        delete deletenode;
        return;
    }
    Node *tem = head;
    int i = 1;
    while (i < pos)
    {
        if (tem == NULL || tem->next == NULL)
        {
            return;
        }
        tem = tem->next;
        i++;
    }
    if(tem->next==NULL)
    {
        return;
    }
    Node *del = tem->next;
    if (tem->next == tail)
    {
        tem->next = NULL;
        tail = tem;
        delete del;
        return;
    }
    else if (tem->next != tail)
    {
        tem->next = del->next;
        tem->next->prev = tem;
        delete del;
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

    delete_any_position(head, tail, 2434324);
    print_forward(head);
    return 0;
}