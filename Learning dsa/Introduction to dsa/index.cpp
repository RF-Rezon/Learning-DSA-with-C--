#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int i = 1; i <= n; i++) // big O(n)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }

        // for (int i = 1; i <= sqrt(n); i++) // big O(sqrt(n))
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " " << n / i << " ";
    //     }
    // }

    // OR>>>>>>>>>>>>>>>>>>>>>>>

    for (int i = 1; i * i <= n; i++) // big O(sqrt(n))
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
        }
    }

    return 0;
}
