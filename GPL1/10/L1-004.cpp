#include <iostream>
using namespace std;
int main()
{
    int F = 0, C = 0;
    cin >> F;
    C = 5 * (F - 32) / 9;
    cout << "Celsius = " << C;
    return 0;
}