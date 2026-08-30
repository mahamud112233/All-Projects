#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int valu;
    Node* next;
    Node* prev;
    Node(int valu)
    {
        this->valu=valu;
        this->next= NULL;
        this->prev=NULL;
    }
};
class myQueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* n=new Node(val);
        if(head==NULL)
        {
            head=n;
            tail=n;
            return;
        }
        tail->next=n;
        n->prev=tail;
        tail=n;
        return;
    }
    void pop()
    {
        sz--;
        Node* d=head;
        if(head->next==NULL)
        {
            head=NULL;
            tail=NULL;
            delete d;
            return;
        }
        head=head->next;
        head->prev=NULL;
        delete d;
        return;
    }
    int front()
    {
        return head->valu;
    }
    int back()
    {
        return tail->valu;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(head==NULL)
        {
            return true;
        }
        return false;
    }
};
int main ()
{
    myQueue q;
    int a;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}