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
int insert(Node *&head, Node *&tail, int val, int ind)
{
    Node *n = new Node(val);

    if (ind == 0)
    {
        if (head == NULL && tail == NULL)
        {
            head = n;
            tail = n;
            return 1;
        }
        head->prev = n;
        n->next = head;
        head = n;
        return 1;
    }
    else
    {
        if (head == NULL && tail == NULL)
        {
            return 0;
        }
        Node *t = head;
        int i = 0;
        for(;i<ind-1;i++)
        {
            t=t->next;
            if(t==NULL)
             return 0;
        }
         if (t->next == NULL)
        {
            tail->next = n;
            n->prev = tail;
            tail = n;
            return 1;
        }
        else
        {
            n->next = t->next;
            n->next->prev = n;
            t->next = n;
            n->prev = t;
        }
        return 1;
    }
}
void left(Node *head)
{
    while (head != NULL)
    {
        cout << head->valu << " ";
        head = head->next;
    }
    return;
}
void right(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->valu << " ";
        tail = tail->prev;
    }
    return;
}
int main()
{
    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;
    while (q--)
    {
        int ind, v;
        cin >> ind >> v;
        int flag = insert(head, tail, v, ind);
        if (flag == 0)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            cout << "L -> ";
            left(head);
            cout << endl;
            cout << "R -> ";
            right(tail);
            cout << endl;
        }
    }
    return 0;
}