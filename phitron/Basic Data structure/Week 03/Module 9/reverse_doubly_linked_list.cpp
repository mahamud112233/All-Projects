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
void insert_tail(Node *&head, Node *&tail, int valu)
{
    Node *n = new Node(valu);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    n->prev = tail;
    tail = n;
}
void print(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->valu << " ";
        tem = tem->next;
    }
    cout << endl;
}
void rever(Node *head, Node *tail)
{
    for (Node *i = head, *j = tail; i != j && i->prev != tail; i = i->next, j = j->prev)
    {
        swap(i->valu,j->valu);
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int valu;
        cin >> valu;
        if (valu == -1)
        {
            break;
        }
        insert_tail(head, tail, valu);
    }
    rever(head, tail);
    print(head);
    return 0;
}