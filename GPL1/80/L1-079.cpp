#include <iostream>
using namespace std;
const int N = 1e6 + 10;

int main()
{
    int n = 0, tmp = 0, t[N] = {0}, min = N - 1, max = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        t[tmp] ++;
        max = (tmp > max) ? tmp : max;
        min = (tmp < min) ? tmp : min;
    }

    cout << min << " "<< t[min] << endl;
    cout << max << " "<<  t[max];

    return 0;
}