#include <iostream>
using namespace std;
int main()
{
    int n = 0, m = 0;
    cin >> n >> m;

    while (n--)
    {
        double p = 0;
        cin >> p;
        if (p < m) printf("On Sale! %.1lf\n", p);
    }

    return 0;
}