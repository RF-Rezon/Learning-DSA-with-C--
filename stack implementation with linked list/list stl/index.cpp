#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack newStack; // static cz diyanamic dont needed
    int stk_size;

    cin >> stk_size;

    for (int i = 0; i < stk_size; i++)
    {
        int x;
        cin >> x;
        newStack.push(x);
    }

    while (!newStack.empty())
    {
        cout << newStack.top() << endl;
        newStack.pop();
    }

    return 0;
}