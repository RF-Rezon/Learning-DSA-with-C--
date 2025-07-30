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

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;

    if (root)
        q.push(root);
    while (!q.empty())
    {
        // Point kora- pop kora
        Node *p = q.front();
        q.pop();

        // oi node ke niye kaj
        int l, r;
        cin >> l >> r;
        Node *leftNode, *rightNode;
        if (l == -1)
            leftNode = NULL;
        else
            leftNode = new Node(l);
        if (r == -1)
            rightNode = NULL;
        else
            rightNode = new Node(r);

        p->left = leftNode;
        p->right = rightNode;
        // Children push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

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
    Node *getroot = input_tree();
    level_order(getroot);
    return 0;
}