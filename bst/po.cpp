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

    // preorder(root);
    level_order(root);

    return 0;
}