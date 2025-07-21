#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
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