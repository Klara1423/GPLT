#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double h = 0, w = 0;
    cin >> h;
    w = (h - 100) * 0.9 * 2;
    cout << fixed << setprecision(1) << w;
    return 0;
}