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
void input(Node *&head, Node *&tail, int valu)
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
int node_size(Node *head)
{
    int a = 0;
    for (Node *i = head; i != NULL; i=i->next)
    {
        a++;
    }
    return a;
}
int main()
{
    int arr[2];
    for (int i = 0; i < 2; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int valu;
        while (1)
        {
            cin >> valu;
            if (valu == -1)
            {
                break;
            }
            input(head, tail, valu);
        }
      arr[i]=  node_size(head);
    }
    arr[0]==arr[1] ? cout << "YES\n" : cout << "NO\n";
    return 0;
}