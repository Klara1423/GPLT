#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, tmp = 0;
        cin >> n;
        for (int i = 0; i < 6; i++)
        {
            if (i < 3) tmp += n % 10;
            else tmp -= n % 10;
            n /= 10;
        }

        if (tmp) cout << "Wish you good luck.\n";
        else cout << "You are lucky!\n";
    }

    return 0;
}