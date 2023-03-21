#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int h = 0, w = 0, s = 0;
        cin >> h >> w;
        s = (h - 100) * 0.9 * 2;
        if (abs(w - s) < s * 0.1) cout << "You are wan mei!" << endl;
        else if (w > s) cout << "You are tai pang le!" << endl;
        else cout << "You are tai shou le!" << endl;
    }
    return 0;
}