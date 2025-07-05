////////   Complexity O(1)

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
    // (*newNode).next = head;
    head = newNode;
}

void add_a_node_at_last(Node *head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
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
    // Node *head = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    // (*head).next = a;
    a->next = tail;
    // (*a).next = tail;

    add_a_node_at_last(head, tail, 200);
    print_the_linked_list(head);

    return 0;
}

////////   Complexity O(1).