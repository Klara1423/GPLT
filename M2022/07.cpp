#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n = 0, k = 0, x = 0, a[105][105] = {0};
    cin >> n >> k >> x;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    
    for (int j = 1, p = 1; j < n; j+=2, p++)
    {
        for (int i = n - 1; i >= p; i--)
            a[i][j] = a[i - p][j];
        for (int i = 0; i < p; i++)
            a[i][j] = x;
        if (p == k) p = 0; 
    }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << a[i][j] << " ";
    //     cout << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        int t = 0;
        for (int j = 0; j < n; j++)
        {
            t += a[i][j];
        }
        cout << (i == 0 ? "" : " ") << t;
    }

    return 0;
}