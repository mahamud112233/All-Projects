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
    tail = n;
}
void print_list(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->valu << " ";
        tem = tem->next;
    }
    cout << endl;
}
void recur(Node *&head, Node *&tail, Node *tem)
{
    if (tem->next == NULL)
    {
        head = tem;
        return;
    }

    recur(head, tail, tem->next);
    tem->next->next = tem;
    tem->next = NULL;
    tail = tem;
    return;
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
    recur(head, tail, head);
    print_list(head);
    return 0;
}