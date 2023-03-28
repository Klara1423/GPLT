#include <iostream>
using namespace std;

int main()
{
    int n = 0, tmp = 0, len = 0;
    cin >> n;

    for (int i = 0; tmp < n; i++)
    {
        tmp = tmp * 10 + 1;
        len++;
    }

    while (tmp % n != 0)
    {
        cout << tmp / n;
        tmp -= (tmp / n) * n;
        tmp = tmp * 10 + 1;
        len++;
    }
    cout << tmp / n << " " << len;

    return 0;
}
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     long long n = 0, ans = 1, tmp = 10, len = 1;
//     cin >> n;
//     while (ans % n)
//     {
//         ans += tmp;
//         tmp *= 10;
//         len++;
//     }

//     cout << ans / n << " "<< len; 
//     return 0;
// }