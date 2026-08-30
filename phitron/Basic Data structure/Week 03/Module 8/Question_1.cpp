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
int compare(Node *head1, Node *head2)
{
    while (1)
    {

        if (head1 == NULL && head2 != NULL)
        {
            return 0;
        }
        else if (head1 != NULL && head2 == NULL)
        {
            return 0;
        }
        else if (head1 == NULL && head2 == NULL)
        {
            return 1;
        }
        else if (head1->valu != head2->valu)
        {
            return 0;
        }

        head1 = head1->next;
        head2 = head2->next;
    }
}
int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (1)
    {
        int valu;
        cin >> valu;
        if (valu == -1)
        {
            break;
        }
        insert_tail(head1, tail1, valu);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (1)
    {
        int valu;
        cin >> valu;
        if (valu == -1)
        {
            break;
        }
        insert_tail(head2, tail2, valu);
    }
    int x = compare(head1, head2);
    x == 1 ? cout << "YES\n" : cout << "NO\n";
    return 0;
}