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
void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);     // left
    postorder(root->right);    // right
    cout << root->valu << " "; // root
}
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    postorder(root);

    return 0;
}