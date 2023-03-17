#include <iostream>
using namespace std;
int main()
{
    int today = 0, ans = 0;
    cin >> today;
    ans = (today + 2 + 7 - 1) % 7 + 1;
    cout << ans;
    return 0;
}