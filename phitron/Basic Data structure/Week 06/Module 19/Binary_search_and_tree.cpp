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
Node *tree_input()
{
    int v;
    cin >> v;
    Node *root;

    if (v == -1)
        root = NULL;
    else
        root = new Node(v);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *lf, *rt;
        if (l == -1)
            lf = NULL;
        else
            lf = new Node(l);
        if (r == -1)
            rt = NULL;
        else
            rt = new Node(r);
        p->left = lf;
        p->right = rt;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
bool search(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->valu == val)
    {
        return true;
    }
    if (root->valu > val)
    {
        return search(root->left, val);
    }
    else
    {
        return search(root->right, val);
    }
}
int main()
{
    Node *root = tree_input();
    int val;
    cin >> val;
    bool f = search(root, val);
    f == true ? cout << "Found" : cout << "Not found";
    return 0;
}