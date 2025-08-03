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

queue<Node *> without_leaf(Node *root)
{
    queue<Node *> q;
    queue<Node *> q2;
    if (root == NULL)
    {
        return q2;
    }

    q.push(root);

    while (!q.empty())
    {
        // Ber kore ana
        Node *f = q.front();
        q.pop();

        // Oi node ke niye kaj
        if (f->left == NULL && f->right == NULL)
        {
            q2.push(f);
        }

        // Children Push
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return q2;
}

void final_print(queue<Node *> q)
{
    stack<Node *> stk;

    while (!q.empty())
    {
        stk.push(q.front());
        q.pop();
    }

    while (!stk.empty())
    {
        cout << stk.top()->val << " ";
        stk.pop();
    }

    cout << endl;
}

int main()
{
    Node *getroot = input_tree();
    queue<Node *> que = without_leaf(getroot);
    final_print(que);
    return 0;
}