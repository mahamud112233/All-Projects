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
class Stack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    void push1(int val)
    {
        Node *n = new Node(val);
        if (head == NULL)
        {
            head = n;
            tail = n;
            return;
        }
        tail->next = n;
        n->prev = tail;
        tail = n;
        return;
    }
    void pop1()
    {
        if (tail == NULL)
        {
            return;
        }
        Node *del = tail;
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
            delete del;
            return;
        }
        tail = tail->prev;
        tail->next = NULL;
        delete del;
        return;
    }
    int top1()
    {
        if(tail!=NULL)
        return tail->valu;
        else
        cout << "Invalid";
        return 0;
    }
};
class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    void push(int val)
    {
        Node *n = new Node(val);
        if (head == NULL)
        {
            head = n;
            tail = n;
            return;
        }
        tail->next = n;
        n->prev = tail;
        tail = n;
        return;
    
    }
    void pop()
    {
        if (tail == NULL)
        {
            return;
        }
        Node *del = head;
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
            delete del;
            return;
        }
        head = head->next;
        head->prev = NULL;
        delete del;
        return;
    }
    int front()
    {
        if(head!=NULL)
        return head->valu;
        else
        cout << "Invalid";
        return 0;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    Stack *a = new Stack;
    Queue *b = new Queue;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a->push1(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b->push(x);
    }
    if (n == m)
    {
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a->top1() == b->front())
            {
                a->pop1();
                b->pop();
            }
            else
            {
                flag = false;
                break;
            }
        }
        flag == true ? cout << "YES" : cout << "NO";
    }
    else
        cout << "NO";
    return 0;
}