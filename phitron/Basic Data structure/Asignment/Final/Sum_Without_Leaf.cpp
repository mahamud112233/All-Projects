#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int valu;
    Node* left;
    Node* right;
    Node(int valu)
    {
        this->valu=valu;
        this->left= NULL;
        this->right=NULL;
    }
};Node *tree_input()
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
int sum_without_leaf(Node* root)
{
    if(root==NULL) return 0;
    queue<Node*> q;
    if(root) q.push(root);
    int sum=0;
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();
        if(p->left!=NULL || p->right!=NULL)
        {
            sum+=p->valu;
        }
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return sum;
}
int main ()
{
    Node *root = tree_input();
    int sum=sum_without_leaf(root);
    cout << sum << endl;
    return 0;
}