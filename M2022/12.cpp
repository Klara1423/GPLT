#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
const int N = 1e5 + 10;
int main()
{
    int n = 0, m = 0, z = 1, a[N][N] = {0}, t[105] = {0};
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i][0];
        for (int j = 1; j <= a[i][0]; j++)
        {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        if (x == 0)
        {
            z = a[z][y];
        }
        else if (x == 1)
        {
            t[y] = z;
            cout << z << endl;
        }
        else
        {
            z = t[y];
        }
        // cout << i + 1 << ":" << z << endl;  
    }
    
    cout << z << endl ;
    return 0;
}