#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, tmp = 0, ans = 0;
    cin >> a >> b;
    tmp = a * b;
    while (tmp)
    {
        ans = ans * 10 + tmp % 10;
        tmp /= 10;
    }
    cout << ans;
    return 0;
}