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
void print_level(Node* root)
{
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        cout << p->valu << " ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}
void insert_value(Node* &root,int val)
{
    if(root==NULL) root=new Node(val);
    if(root->valu>val)
    {
        if(root->left==NULL) root->left=new Node(val);
        else insert_value(root->left,val);
    }
    else
    {
        if(root->right==NULL) root->right=new Node(val);
        else insert_value(root->right,val);
    }
}
int main()
{
    Node *root = tree_input();
    int val;
    cin >> val;
    
    insert_value(root,val);

    print_level(root);
    return 0;
}