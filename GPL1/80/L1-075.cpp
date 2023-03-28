#include <iostream>
using namespace std;
int main()
{
    int n = 0, y = 0, m = 0;
    cin >> n;
    y = n / 100;
    m = n % 100;

    if (n / 10000 > 0) printf("%04d-%02d", y, m);
    else
        if (y < 22) printf("20%02d-%02d", y, m);
        else printf("19%02d-%02d", y, m);

    return 0;
}