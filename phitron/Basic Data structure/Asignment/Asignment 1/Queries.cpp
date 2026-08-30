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
void head_l(Node *&head, Node *&tail, int valu)
{
    Node *n = new Node(valu);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    n->next = head;
    head = n;
}
void tail_l(Node* &head,Node *&tail, int valu)
{
    Node *n = new Node(valu);
    if (tail == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    tail = n;
}
void delet(Node *&head, Node *&tail, int valu)
{
    if(head== NULL)
    {
        return;
    }
    if (valu == 0)
    {
        Node *del = head;
        head = head->next;
        if(head== NULL)
        {
            tail= NULL;
        }
        delete del;
        return;
    }
    Node *tem = head;
    for (int i = 0; i < valu - 1; i++)
    {
        if( tem->next== NULL)
        {
            return;
        }
        tem = tem->next;
    }
    
    if (tem->next == NULL)
        {
            return;
        }

    if (tem->next->next != NULL)
    {
        Node *del = tem->next;
        tem->next = tem->next->next;
        delete del;
    }
    else
    {
        Node *del = tem->next;
        tem->next = NULL;
        delete del;
        tail = tem;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, valu;
        cin >> x >> valu;
        if (x == 0)
        {
            head_l(head, tail, valu);
        }
        else if (x == 1)
        {
            tail_l(head,tail, valu);
        }
        else if (x == 2)
        {
            delet(head, tail, valu);
        }
        print(head);
        
    }
    return 0;
}