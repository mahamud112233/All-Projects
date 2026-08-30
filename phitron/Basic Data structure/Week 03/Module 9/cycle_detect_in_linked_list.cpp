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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = head;

    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }
    flag == true ? cout << "Cycle Detected\n" : cout << "NO Cycle\n";
    return 0;
}