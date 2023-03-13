#include <iostream>
using namespace std;
int main()
{
    char ch;
    int t[10] = {0};

    while (cin >> ch)
        t[ch - '0']++;

    for (int i = 0; i < 10; i++)
        if (t[i] != 0)
            cout << i << ':' << t[i] << endl;

    return 0;
}