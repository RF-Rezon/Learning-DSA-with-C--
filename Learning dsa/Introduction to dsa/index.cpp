#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // O(n)
    {
        for (int j = 1; j <= n; j *= 2) // O(log(n))
        {
            cout << "Hello" << endl;
        }
    }

    return 0;
}

// Total complexity = O(n * log(n)) = O(nlog(n))
