#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    vector<int> myStack;

    void push(int val)
    {
        myStack.push_back(val);
    }

    void pop()
    {
        myStack.pop_back();
    }

    int top()
    {
        return myStack.back();
    }
    int size()
    {
        return myStack.size();
    }
    bool empty()
    {
        return myStack.empty();
    }
};

class myQueqe
{
public:
    list<int> myQueqe; // Implementing Queue with list stl. (Not Stack STL or Queue stl)

    void push(int val)
    {
        myQueqe.push_back(val);
    }

    void pop()
    {
        myQueqe.pop_front();
    }

    int front()
    {
        return myQueqe.front();
    }
    int size()
    {
        return myQueqe.size();
    }
    bool empty()
    {
        return myQueqe.empty();
    }
};

int main()
{
    myStack stk;
    myQueqe que;

    int n, m;

    cin >> n >> m;

    if (n != m)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < n; i++) // taking inputs for stacks
        {
            int val;
            cin >> val;
            stk.push(val);
        }
        for (int i = 0; i < m; i++) // taking inputs for queue
        {
            int val;
            cin >> val;
            que.push(val);
        }

        bool flag = true;
        while (!stk.empty())
        {
            if (stk.top() != que.front())
            {
                flag = false;
                break;
            }
            stk.pop();
            que.pop();
        }

        flag ? (cout << "YES") : (cout << "NO");
    }

    return 0;
}
