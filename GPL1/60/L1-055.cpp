#include <iostream>
using namespace std;
int main()
{
    int p = 0, q = 0, a = 0, b = 0, c = 0;
    cin >> p >> q >> a >> b >> c;

    if ((p > q && 3 - (a + b + c) > 0) || (p < q && a + b + c == 0))
        cout << "The winner is a: " << p << " + " << 3 - (a + b + c);
    else
        cout << "The winner is b: " << q << " + " << (a + b + c);
    return 0;
}