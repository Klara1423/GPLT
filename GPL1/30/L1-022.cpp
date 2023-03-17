#include <iostream>
using namespace std;
int main()
{
    int t = 0, a = 0, b = 0, n = 0;
    cin >> t;

    while (t--)
    {
        cin >> n;
        if (n % 2) a++;
        else b++;
    }

    cout << a << ' ' << b;
    return 0;
}