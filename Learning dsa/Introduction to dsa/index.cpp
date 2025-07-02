#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *index;
};
int main()
{
    Node a, b, c;

    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.index = &b;
    b.index = &c;
    c.index = NULL;

    cout << a.index->index->val;
}