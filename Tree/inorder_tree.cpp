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

// void preorder(Node *root)
// {
//     if (root == NULL)
//         return;
//     preorder(root->left);
//     cout << root->val << " ";
//     preorder(root->right);
// }

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "No Tree." << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = new Node(50);
    Node *a = new Node(30);
    Node *b = new Node(20);
    Node *c = new Node(20);
    Node *d = new Node(10);
    Node *e = new Node(10);
    Node *f = new Node(10);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;

    // preorder(root);
    level_order(root);

    return 0;
}