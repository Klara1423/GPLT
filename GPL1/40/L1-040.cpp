#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        char ch = 0;
        double n = 0;
        cin >> ch >> n;

        if (ch == 'M') printf("%.2lf\n", n / 1.09);
        else printf("%.2lf\n", n * 1.09);
    }

    return 0;
}