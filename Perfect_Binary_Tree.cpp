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

int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1; // level 1 theke suru korchi jate full level hisab sohoj hoy. (Normally 0)
    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l + 1 + r;
}

int formulla_check(int max_h)
{
    return (pow(2, max_h) - 1);
}

int main()
{
    Node *root = input_tree();
    int max_h = max_height(root);
    int gettotalnodesbyformulla = formulla_check(max_h);
    int gettotalnodes = count_nodes(root);
    if (gettotalnodesbyformulla == gettotalnodes)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}