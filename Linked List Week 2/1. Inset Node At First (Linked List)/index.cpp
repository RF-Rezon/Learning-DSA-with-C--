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

void add_a_node_at_fist(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void print_the_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    // (*head).next = a;
    a->next = b;
    // (*a).next = b;
    add_a_node_at_fist(head, 100);
    add_a_node_at_fist(head, 200);
    add_a_node_at_fist(head, 300);
    print_the_linked_list(head);

    return 0;
}