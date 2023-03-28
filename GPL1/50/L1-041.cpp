#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    for (int i = 1; cin >> n; i++)
    {
        if (n == 250)
        {
            cout << i;
            break;
        }
    }
    return 0;
}