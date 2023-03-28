#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n = 0, m = 0;
    cin >> n >> m;

    while (m--)
    {
        string str;
        cin >> str;
        int ans = 1;
        for (int i = 0; i < n; i++)
            if (str[i] == 'n') 
                ans += pow(2, n - i - 1); 
        cout << ans << endl;
    }

    return 0;
}