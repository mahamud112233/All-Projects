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
void print_leaf_as_descending(Node* root,vector<int> &v)
{
    if(root==NULL) return;
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();
        if(p->left==NULL && p->right==NULL)
        {
            v.push_back(p->valu);
        }
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return;
}
int main ()
{
    Node *root = tree_input();
    vector<int> v;
    print_leaf_as_descending(root,v);
    sort(v.begin(),v.end(),greater<int>());
    for(int x:v)
    {
        cout << x << " ";
    }
    return 0;
}