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
void print_forward(Node* head)
{
    Node* tem= head;
    while(tem!=NULL)
    {
        cout << tem->valu << " ";
        tem= tem->next;
    }
    cout << endl;
}
void print_backward(Node* tail)
{
    Node* tem= tail;
    while(tem!=NULL)
    {
        cout << tem->valu << " ";
        tem= tem->prev;
    }
    cout << endl;
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

    print_forward(head);
    print_backward(tail);
    return 0;
}