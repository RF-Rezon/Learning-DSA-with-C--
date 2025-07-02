#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{

    Node *head = new Node(10);
    Node *body = new Node(20);
    Node *tail = new Node(30);

    // (*head).next = body;
    head->next = body;
    // (*body).next= tail;
    body->next = tail;

    // Loving Procedure
    cout << (*head).val << endl;
    cout << (*((*head).next)).val << endl;
    cout << (*((*((*head).next)).next)).val << endl;

    // With Arrow
    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;

    return 0;
}