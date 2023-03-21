#include <iostream>
using namespace std;
int main()
{
    double a = 0, b = 0;
    cin >> a >> b;

    if (b > 0) printf("%.0lf/%.0lf=%.2lf", a, b, a / b);
    else if (b == 0) printf("%.0lf/%.0lf=Error", a, b);
    else printf("%.0lf/(%.0lf)=%.2lf", a, b, a / b);

    return 0;
}