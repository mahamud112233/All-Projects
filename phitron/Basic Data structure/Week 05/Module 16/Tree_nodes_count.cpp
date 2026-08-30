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
};
Node* tree_input()
{
    int v;
    cin >> v;
    Node* root;
    if(v==-1) root=NULL;
    else root=new Node(v);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node *lf,*rt;
        if(l==-1) lf=NULL;
        else lf=new Node(l);
        if(r==-1) rt=NULL;
        else rt=new Node(r);
        p->left=lf;
        p->right=rt;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
int node_count(Node* root)
{
    if(root==NULL) return 0;
    int l=node_count(root->left);
    int r=node_count(root->right);
    return l+r+1;
}
int main ()
{
    Node* root= tree_input();
    int count = node_count(root);
    cout << count << endl;
    return 0;
}