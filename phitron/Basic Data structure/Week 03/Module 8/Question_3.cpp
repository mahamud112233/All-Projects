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
int phali(Node* head,Node* tail)
{
   while(head!=tail && head->prev!=tail)
   {
    if(head->valu!=tail->valu)
    {
        return 0;
    }
    else
    {
        head=head->next;
        tail=tail->prev;
    }
   }
   return 1;
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
        insert_tail(head, tail, x);
    }
    int x=phali(head,tail);
    x==1 ? cout << "YES\n" : cout << "NO\n";
    
    return 0;
}