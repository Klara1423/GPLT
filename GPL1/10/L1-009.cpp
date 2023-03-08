#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
long long gcd(long long a, long long b)
{
    while(b)
    {
        long long c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    long long n = 0, ans = 0, up = 0, down = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long x = 0, y = 0;
        scanf("%lld/%lld", &x, &y);
        up = up * y + down * x;
        down = y * down;
    }
    
    if (down != 0) ans = up / down;

    if (down != 0 && up % down != 0)
    {
        long long t = gcd(abs(up), down);
        up /= t;
        down /= t;
    }

    if (up == 0)
        cout << 0;
    else if (up % down == 0)
        cout << ans;
    else if (abs(up) > down)
    {
        up -= ans * down;
        cout << ans << " " << up << "/" << down;
    }
    else
        cout << up << "/" << down;
    return 0;
}