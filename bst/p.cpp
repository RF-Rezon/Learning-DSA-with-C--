#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *left;
    int val;
    Node *right;

    Node(int val)
    {
        this->left = NULL;
        this->val = val;
        this->right = NULL;
    }
};

void preorder(Node *root)
{
    if (root == NULL)
        return;
    preorder(root->left);
    preorder(root->right);
    cout << root->val << " ";
}

int main()
{
    Node *root = new Node(90);
    Node *a = new Node(80);
    Node *b = new Node(70);
    Node *c = new Node(60);
    Node *d = new Node(50);
    Node *e = new Node(20);
    Node *f = new Node(10);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;

    preorder(root);

    return 0;
}