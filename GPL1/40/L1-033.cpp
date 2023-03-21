#include <iostream>
using namespace std;

int func(int x)
{
    int t[10] = {0}, ans = 0;
    for (int i = 0; i < 4; i++)
    {
        if (t[x % 10] == 0) ans++;
        t[x % 10]++;
        x /= 10;
    }
    return ans;
}

int main()
{
    int y = 0, n = 0, ans = 0;
    cin >> y >> n;

    while (func(y) != n)
    {
        ans++;
        y++;
    }
    
    printf("%d %04d", ans, y);

    return 0;
}