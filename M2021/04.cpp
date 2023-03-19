#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        if (a * a + b * b + c * c == 3 * a * b * c)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }

    return 0;
}