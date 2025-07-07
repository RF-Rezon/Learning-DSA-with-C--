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

void print_the_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

bool flag = false;

int exist_check(Node *head, int val)
{
    int target_num = val;

    int index = 0;

    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        if (temp->val == target_num)
        {
            flag = true;
            return index;
        }
        else if (temp->val != target_num)
        {
            flag = false;
        }
        index++;
    }

    return target_num;
}

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
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

        int input;
        cin >> input;
        int result = exist_check(head, input);

        if (flag == true)
        {
            cout << result << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}