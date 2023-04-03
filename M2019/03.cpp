#include <iostream>
using namespace std;

int main()
{
    int n = 0, ans =  0;
    cin >> n;
    ans = (n + 1) % 7 + 1;
    cout << ans;
    return 0;
}