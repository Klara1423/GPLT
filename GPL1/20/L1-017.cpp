#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    double ans = 0, n = 0;
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
        if (str[i] == '2')
            n++;

    if (str[0] == '-')
    {
        ans = n / (str.size() - 1);
        ans *= 1.5;
    }
    else
    {
        ans = n / str.size();
    }

    if (str[str.size() - 1] == '0' || str[str.size() - 1] == '2' || str[str.size() - 1] == '4' || str[str.size() - 1] == '6' || str[str.size() - 1] == '8')
        ans *= 2;

    cout << fixed << setprecision(2) << ans * 100 << "%" << endl;
    return 0;
}