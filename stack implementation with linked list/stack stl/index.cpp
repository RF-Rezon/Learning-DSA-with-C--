#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> newStack; // Stack er stl amra use kori main fuction er vitore and amra kono class nijera banai na.

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