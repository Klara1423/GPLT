#include <iostream>
using namespace std;

int main()
{
    double n = 0, sum = 0, ans = 0;
    int t = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        sum += 1 / n;
    }
    ans = t / sum;
    printf("%.2lf", ans);

    return 0;
}