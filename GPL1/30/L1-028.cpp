#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n)
{
    if(n == 1) return false;
    for(int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        int num = 0;
        cin >> num;
        if (isprime(num)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
