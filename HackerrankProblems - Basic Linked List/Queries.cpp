#include <iostream>
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

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteAtIndex(Node *&head, int index)
{
    if (head == NULL)
        return;

    if (index == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (temp == NULL || temp->next == NULL)
            return;
        temp = temp->next;
    }

    if (temp->next == NULL)
        return;

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void printTheList(Node *head)
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
    Node *head = NULL;
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int first, sceond;
        cin >> first >> sceond;

        if (first == 0)
        {
            insertAtHead(head, sceond);
        }
        else if (first == 1)
        {
            insertAtTail(head, sceond);
        }
        else if (first == 2)
        {
            deleteAtIndex(head, sceond);
        }

        printTheList(head);
    }

    return 0;
}
