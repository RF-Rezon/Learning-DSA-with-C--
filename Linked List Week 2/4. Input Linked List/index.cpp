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

void add_a_node_at_first(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    // (*newNode).next = head;
    head = newNode;
}

void add_a_node_at_last(Node *&head, Node *&tail, int val)
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

void add_a_node_at_any_position(Node *head, int indx, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < indx - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        add_a_node_at_last(head, tail, val);
    }

    print_the_linked_list(head);
    return 0;
}