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

    // NULL handle
    if (v == -1)
        root = NULL;
    else
        root = new Node(v);

    //NULL handle
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {   
        // 1.Node ber kore ana
        Node *p = q.front(); 
        q.pop();

        // 2.node nia kaj kora
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

        // 3.node k queue te push kora
        if (p->left) 
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order_print(Node *root)
{
    if(root==NULL)
    {
        cout << "No Tree" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->valu << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    Node *root = tree_input();
    level_order_print(root);
    return 0;
}