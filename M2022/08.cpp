#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

bool isprime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }
    if(n == 1) return false;
    return true;
}

int main()
{
    int m = 0, n = 0, ans = 0;
    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        if(isprime(i) == false) continue;
        for (int j = i; j <= n; j++)
        {
            if(isprime(j) == false) continue;
            for (int k = j; k <= n; k++)
            {
                if (i == j || i == k || j == k || isprime(k) == false) continue;
                if (isprime(i * j + k) == true && isprime(j * k + i) == true && isprime(k * i + j) == true)
                    if(i < j && j < k) 
                    {
                        ans++;
                        //cout << i << " " << j << " " << k << endl;
                    }
            }
        }
        
    }
    cout << ans;
    return 0;
}