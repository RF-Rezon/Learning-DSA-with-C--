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

Node *convert(int a[], int n, int l, int r)
{
    while (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftroot = convert(a, n, l, mid - 1);
    Node *rightroot = convert(a, n, mid + 1, r);
    root->left = leftroot;
    root->right = rightroot;

    return root;
}

int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    Node *root = convert(arr, num, 0, num - 1);
    level_order(root);
    return 0;
}