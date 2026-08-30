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
void insert(Node *&head, Node *&tail, int valu)
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
void sort_l(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i; j->next != NULL;)
        {
            if (i->valu == j->next->valu)
            {
                Node *d = j->next;
                j->next = j->next->next;
                delete d;
                if (j->next == NULL)
                {
                    tail = j;
                }
            }
            else
            {
                j = j->next;
            }
        }
    }
}
void print(Node *head)
{
    Node *tem = head;
    while (1)
    {
        if (tem == NULL)
        {
            return;
        }
        cout << tem->valu << " ";
        tem = tem->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert(head, tail, x);
    }
    sort_l(head, tail);
    print(head);
    return 0;
}