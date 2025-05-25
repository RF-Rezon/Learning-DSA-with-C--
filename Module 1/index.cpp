// #include <stdio.h>;
#include <iostream>;
#include <iomanip>;

using namespace std;
int main()
{
    int x;
    // EOF
    while (cin >> x)
    {
        cout << x << endl;
    }
    // Setprecision
    float value = 20.236123;

    cout << fixed << setprecision(4) << value;

    return 0;
}
