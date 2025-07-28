#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> stk;
    queue<int> que;

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
