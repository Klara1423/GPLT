#include <iostream>
using namespace std;
int main()
{
    int n = 0, t[] = {0, 1, 3, 9, 33, 153, 873, 5913, 46233, 409113, 4037913}; 
    cin >> n;
    cout << t[n];
    return 0;
}
// int func(int n)
// {
//     int ans = 1;
//     for (int i = 1; i <= n; i++)
//         ans *= i;
//     return ans;
// }

// int main()
// {
//     int n = 0, ans = 0;
//     cin >> n;

//     for(int i = 1; i <= n; i++)
//         ans += func(i);

//     cout << ans;
//     return 0;
// }