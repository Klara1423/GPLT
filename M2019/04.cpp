#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        string str;
        int a = 0, b = 0;
        cin >> str >> a >> b;
        if (a < 15|| a > 20 || b < 50 || b > 70)
            cout << str << endl;
    }
    return 0;
}