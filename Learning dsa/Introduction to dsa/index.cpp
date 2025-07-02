#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *index;

    Node(int val)
    {
        this->val = val;
    }
};
int main()
{
    Node a(10), b(20), c(30);

    a.index = &b;
    b.index = &c;
    c.index = NULL;

    cout << a.val << endl;
    cout << a.index->val << endl;
    cout << a.index->index->val;
}