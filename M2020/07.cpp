#include <iostream>
#include <cmath>
#include <string>
using namespace std;
bool isprime(int n)
{
    if (n == 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return false;
    return true;
}

int main()
{
    // cout << isprime(3) ;
    int l = 0, k = 0, ans = 404;
    string str;
    cin >> l >> k >> str;
    for (int i = 0; i <= l - k; i++)
    {
        int tmp = 0;
        for (int j = 0; j < k; j++)
            tmp = tmp * 10 + (str[i + j] - '0');
        if (isprime(tmp) == true)
        {
            ans = i;
            break;
        }
    }

    if(ans == 404) cout << ans;
    else
    {
        for (int i = ans; i < ans + k; i++)
            cout << str[i];
    }

    return 0;
}