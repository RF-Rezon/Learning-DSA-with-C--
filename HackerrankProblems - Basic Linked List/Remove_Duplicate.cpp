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

Node *createLinkedList()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;

    while (cin >> val && val != -1)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

void removeDuplicates(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *prev = current;
        Node *runner = current->next;

        while (runner != NULL)
        {
            if (runner->val == current->val)
            {
                prev->next = runner->next;
                delete runner;
                runner = prev->next;
            }
            else
            {
                prev = runner;
                runner = runner->next;
            }
        }

        current = current->next;
    }
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = createLinkedList();

    removeDuplicates(head);

    printList(head);

    return 0;
}
