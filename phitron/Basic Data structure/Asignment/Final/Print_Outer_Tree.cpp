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

void print_outer_nodes(Node *root)
{
    if (root == NULL)
        return;
    if (root->left != NULL)
    {
        print_outer_nodes(root->left);
    }
    else if (root->right != NULL)
    {
        print_outer_nodes(root->right);
    }
    cout << root->valu << " ";
    return;
}
int main()
{
    Node *root = tree_input();
    print_outer_nodes(root->left);
    cout << root->valu << " ";
    Node *r = root->right;
    while (r != NULL)
    {
        cout << r->valu << " ";
        if (r->right != NULL)
        {
            r = r->right;
        }
        else if (r->left != NULL)
        {
            r = r->left;
        }
        else
        {
            break;
        }
    }
    return 0;
}