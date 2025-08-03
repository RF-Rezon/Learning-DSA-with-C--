#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left, *right;

    Node(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;

    Node *root = new Node(val);
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

bool is_leaf(Node *node)
{
    return node->left == NULL && node->right == NULL;
}

// get leftmost leaf to root
bool get_left_path(Node *node, vector<int> &path, unordered_set<int> &seen)
{
    if (!node)
        return false;

    path.push_back(node->val);
    seen.insert(node->val);

    if (is_leaf(node))
        return true;

    if (get_left_path(node->left, path, seen))
        return true;
    if (get_left_path(node->right, path, seen))
        return true;

    path.pop_back();
    return false;
}

// get rightmost path, skipping duplicates
void get_right_path(Node *node, vector<int> &path, unordered_set<int> &seen)
{
    while (node)
    {
        if (seen.find(node->val) == seen.end())
            path.push_back(node->val);

        if (node->right)
            node = node->right;
        else if (node->left)
            node = node->left;
        else
            break;
    }

    if (node && is_leaf(node) && seen.find(node->val) == seen.end())
        path.push_back(node->val);
}

int main()
{
    Node *root = input_tree();

    vector<int> left_path;
    unordered_set<int> seen;

    get_left_path(root, left_path, seen);
    reverse(left_path.begin(), left_path.end());

    vector<int> right_path;
    get_right_path(root->right, right_path, seen);

    for (int val : left_path)
        cout << val << " ";
    for (int val : right_path)
        cout << val << " ";
    cout << endl;

    return 0;
}
