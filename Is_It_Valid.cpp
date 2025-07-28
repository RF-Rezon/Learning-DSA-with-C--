#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    bool get_valid(string s)
    {
        stack<char> st;

        for (char c : s)
        {
            if (c == '0')
            {
                if (!st.empty())
                {
                    if (st.top() == '1')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('0');
                    }
                }
                else
                {
                    st.push('0');
                }
            }
            else if (c == '1')
            {
                if (!st.empty())
                {
                    if (st.top() == '0')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('1');
                    }
                }
                else
                {
                    st.push('1');
                }
            }
        }

        return st.empty();
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        myStack obj;
        bool x = obj.get_valid(s);

        cout << (x ? "YES" : "NO") << endl;
    }

    return 0;
}
