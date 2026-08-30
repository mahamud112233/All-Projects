#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int valu;
    Node *left;
    Node *right;
    Node(int valu)
    {
        this->valu = valu;
        this->left = NULL;
        this->right = NULL;
    }
};
void print_level(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->valu << " ";

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
Node* convert(vector<int> ar, int a, int l, int r)
{
    if(l>r)
    {
        return NULL;
    }
    int mid = (l+r) / 2;
    Node *root = new Node(ar[mid]);
    Node* lf=convert(ar,a,l,mid-1);
    Node* rt=convert(ar,a,mid+1,r);
    root->left=lf;
    root->right=rt;
    return root;
}
int main()
{
    int a;
    cin >> a;
    vector<int> ar(a);
    for (int i = 0; i < a; i++)
        cin >> ar[i];

    Node *root = convert(ar, a, 0, a - 1);

    print_level(root);
    return 0;
}