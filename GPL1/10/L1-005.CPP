#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
const int N = 1005;

int main()
{
    int n = 0, m = 0, t[N] = {0};
    char id[N][20] = {0};

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x = 0, y = 0; 
        char z[20] = {0};
        cin >> z >> x >> y;
        strcpy(id[x], z);
        t[x] = y;
    }

    cin >> m;
    for (int i = 0, a = 0; i < m; i++)
    {
        cin >> a;
        cout << id[a] << " " << t[a] << endl; 
    }
    

    return 0;
}