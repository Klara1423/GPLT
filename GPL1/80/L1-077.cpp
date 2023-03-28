#include <iostream>
using namespace std;

int main()
{
    int mood[24]  = {0}, t = 0;
    for (int i = 0; i < 24; i++) cin >> mood[i];


    while (cin >> t && t >= 0 && t < 24)
    {
        if (mood[t] > 50) cout << mood[t] << " Yes\n";
        else cout << mood[t] << " No\n";
    }
    return 0;
}