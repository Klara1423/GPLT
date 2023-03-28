#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, ans = 1;
    cin >> a >> b;
    for (int i = 2; i <= a + b; i++) ans *= i;
    cout << ans;

    return 0;
}