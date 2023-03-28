#include <iostream>
using namespace std;
int main()
{
    int x = 0, y = 0, ans = 0;
    cin >> x >> y;
    ans = 0.5 * 100 * (100- (100 - x) - y);
    cout << ans;
    return 0;
}