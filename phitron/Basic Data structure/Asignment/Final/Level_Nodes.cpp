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

void x_level_nodes(Node *root, int x)
{
    if (root == NULL)
        return;
    queue<pair<Node *, int>> q;
    vector<int> v;
    if (root)
        q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> pa = q.front();
        q.pop();
        Node *p = pa.first;
        int level = pa.second;
        if (x == level)
        {
            v.push_back(p->valu);
        }

        if (p->left)
            q.push({p->left, level + 1});
        if (p->right)
            q.push({p->right, level + 1});
    }
    if (!v.empty())
    {
        for (int c : v)
        {
            cout << c << " ";
        }
    }
    else
    {
        cout << "Invalid";
    }
    return;
}
int main()
{
    Node *root = tree_input();
    int x;
    cin >> x;
    x_level_nodes(root, x);
    return 0;
}