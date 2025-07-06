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

void print_the_linked_list_revarse(Node *head) // By the help of Recurtion
{
    if (head == NULL)
    {
        return;
    }
    print_the_linked_list_revarse(head->next);
    cout << head->val << endl;
}

void delete_first_element_from_liked_list(Node *&head)
{
    Node *deleteableNode = head;
    head = head->next;
    delete deleteableNode;
}
////////////  Recurtion Code  ////////////////////////
// void func(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     func(i + 1, n);                   ////>>>>>>> i++ dile kaj hobe na. i++ dile post increament hobe. Function call er somoy sudhu i jabe then 1 barbe. So barbar "i" call hobe.
//     cout << i << endl;
// }

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

    delete_first_element_from_liked_list(head);

    print_the_linked_list(head);

    // func(1, 10);
    return 0;
}
