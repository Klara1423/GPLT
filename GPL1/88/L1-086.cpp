#include <iostream>
#include <string>
using namespace std;
char max(char a, char b)
{
    char c;
    if (a - '0' > b - '0')
        c = a;
    else
        c = b;
    return c;
}
int main()
{
    string s, a, b, m;
    cin >> a >> b;

    for (int i = 1; i < a.size(); i++)
    {
        if ((a[i] - '0') % 2 == (a[i - 1] - '0') % 2)
        {
            s += max(a[i], a[i - 1]);
        }
    }

    for (int i = 1; i < b.size(); i++)
    {
        if ((b[i] - '0') % 2 == (b[i - 1] - '0') % 2)
        {
            m += max(b[i], b[i - 1]);
        }
    }

    if (s == m)
        cout << s << endl;
    else
        cout << s << endl << m << endl;
    return 0;
}