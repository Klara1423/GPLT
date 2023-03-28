#include <iostream>
using namespace std;
int main()
{
    int m = 0, n = 0, num = 0;
    int a = 0, b = 0, x = 0, y = 0, sum = 0;
    int M[100005] = {0}, N[100005] = {0};
    cin >> n >> m >> num;
    while (num--)
    {
        cin >> a >> b;
        if (a) M[b]++;
        else N[b]++;
    }

    for (int i = 0; i < 100005; i++)
    {
        if (M[i] > 0) y++;
        if (N[i] > 0) x++;
    }

    sum = (n - x) * (m - y);
    cout << sum;
    return 0;
}