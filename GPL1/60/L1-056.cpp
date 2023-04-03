#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
const int N = 1e4 + 5;

struct player
{
    string name;
    int num;
} p[N];

int main()
{
    int n = 0, idx = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].name >> p[i].num;
        ans += p[i].num;
    }
    ans /= 2 * n;

    for (int i = 0; i < n; i++)
        idx = abs(p[idx].num - ans) > abs(p[i].num - ans) ? i : idx;

    cout << ans << " " << p[idx].name;

    return 0;
}