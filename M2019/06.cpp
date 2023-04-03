#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ans;
    int t = 0;
    cin >> t;
    getchar();

    while (t--)
    {
        string str;
        getline(cin, str);
        ans += str[str.find("-T") - 1] - 'A' + '1';
    }

    cout << ans;
    return 0;
}