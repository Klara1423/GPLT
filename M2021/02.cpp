#include <iostream>
using namespace std;

int main()
{
    double a = 0, b = 0, x = 0;
    cin >> a >> b;
    x = a / b;
    printf("%.0lf/%.1lf=%.0lf", a, x, b);
    return 0;
}