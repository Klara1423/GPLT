#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t = 0, a[11] = {0};
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int k = 0;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int n = 0, p = 0;
            cin >> n >> p;
            a[i] -= p;
            a[n] +=p;
        }
    }
    sort(a + 1, a + t);

    for (int i = t; i >= 1; i--)
    {
        cout << t - i << " " << a[i] << endl;
    }
    

    return 0;
}