#include <iostream>
using namespace std;

int main()
{
    int t = 0, n = 0, odd = 0, even = 0;
    cin >> t;

    while (t--)
    {
        cin >> n;
        if(n % 2) odd++;
        else even++;
    }

    cout << odd << " " << even;
    return 0;
}