#include <iostream>
#include <vector>
using namespace std;
const int N = 1e5 + 5;
int main()
{
    int n = 0, m = 0, z = 1, t[105] = {0};
    vector<vector<int>>a;
    vector<int>b;
    a.push_back(b);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        
        int k = 0;
        cin >> k;
        b.push_back(k);

        for (int j = 1; j <= b[0]; j++)
        {
            cin >> k;
            b.push_back(k);
        }

        a.push_back(b);
        b.clear();
    }

    // vector<int>a[N];
    // int n = 0, m = 0, z = 1, t[105] = {0};
    // cin >> n >> m;

    // for (int i = 1; i <= n; i++)
    // {
    //     int k = 0;
    //     cin >> k;
    //     a[i].push_back(k);
    //     for (int j = 1; j <= a[i][0]; j++)
    //     {
    //         cin >> k;
    //         a[i].push_back(k);
    //     }
    // }


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