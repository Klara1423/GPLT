#include <iostream>
using namespace std;
int main()
{
    double w = 0, h = 0, idx = 0;
    cin >> w >> h;

    idx = w / (h * h);
    printf("%.1lf\n", idx);

    if (idx > 25) cout << "PANG";
    else cout << "Hai Xing";

    return 0;
}