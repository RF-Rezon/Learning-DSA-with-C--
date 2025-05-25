// #include <stdio.h>;
#include <iostream>;
#include <algorithm>;
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int z = min(x, y);
    cout << z << endl;

    int m = max(x, y);
    cout << m << endl;

    swap(x, y);

    cout << x << " " << y;

    return 0;
}
