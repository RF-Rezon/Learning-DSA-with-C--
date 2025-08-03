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
        return NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            p->left = new Node(l);
            q.push(p->left);
        }

        if (r != -1)
        {
            p->right = new Node(r);
            q.push(p->right);
        }
    }

    return root;
}

void print_level(Node *root, int t_level)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    vector<int> result;

    while (!q.empty())
    {

        // Ber kore ana
        Node *node = q.front().first;
        int level = q.front().second;
        q.pop();

        // Oi node ke niye kaj
        if (level == t_level)
        {
            result.push_back(node->val);
        }

        // Children push
        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }

    if (!result.empty())
    {
        for (int val : result)
        {
            cout << val << " ";
        }
    }
    else
    {
        cout << "Invalid" << endl;
    }
}

int main()
{
    Node *root = input_tree();
    int level;
    cin >> level;
    print_level(root, level);
}
