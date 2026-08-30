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
int rec(Node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    int l=rec(root->left);
    int r=rec(root->right);
    return max(l,r)+1;

}
int perfec(Node* root)
{
    if(root==NULL) return 0;
    queue<Node*> q;
     
    if(root) q.push(root);
    int count=0;
   
    while(!q.empty())
    {
        if(q.front()!=NULL)
        {
            count++;
        }
        Node* p=q.front();
        q.pop();
       
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return count;
}
int main ()
{
    Node *root = tree_input();
    int count=perfec(root);
    int leaf =(pow(2,rec(root)))-1;
    if(count==leaf) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}