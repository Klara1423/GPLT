#include <iostream>
using namespace std;
int main()
{
    int a[6] = {0}, b[6] = {0}, n = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    cin >> n;
    for (int i = 0; i < 6; i++)
    {
        if (a[i] == 6) a[i]--;
        else a[i] = 6;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if ((a[j] - 1) != b[j]) a[j]--;
            else a[j] -= 2;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        if (i) cout << " " << a[i];
        else cout << a[i];
    }

    return 0;
}