#include <iostream>
using namespace std;
int main()
{
    int n = 0, k = 0, s = 0, G = 0, P = 0;
    int a[291] = {0}, sum = 0;
    cin >> n >> k >> s;

    while (n--)
    {
        cin >> G >> P;
        if (G >= 175 && P >= s) sum++;
        if (G >= 175 && P < s) a[G]++;
    }

    for (int i = 175; i < 291; i++)
    {
        if (a[i] > 0 && a[i] <= k) sum += a[i];
        else if (a[i] > 0 && a[i] > k) sum += k;
    }

    cout << sum;
    return 0;
}