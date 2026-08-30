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
void insert(Node* &head,Node* &tail,int valu)
{
    Node* n= new Node(valu);
    if(head== NULL)
    {
        head= n;
        tail= n;
        return;
    }
    tail->next= n;
    tail=n;
}
int maxi(Node* tem)
{
    if(tem->next==NULL)
    {
        return tem->valu;
    }
    int a=tem->valu;
    int c=maxi(tem->next);
    return max(a,c);
}
int mini(Node* tem)
{
    if(tem->next==NULL)
    {
        return tem->valu;
    }
    int a=tem->valu;
    int c=mini(tem->next);
    return min(a,c);
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
        insert(head,tail,x);
    }
    int a=maxi(head);
    int b=mini(head);
    long long int sum= a-b;
    cout << sum << endl;
    return 0;
}