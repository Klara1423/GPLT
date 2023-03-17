#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t[4] = {0};
    char ch = 0;

    while (cin >> ch)
    {
        if (ch == 'g' || ch == 'G') t[0]++;
        else if (ch == 'p' || ch == 'P') t[1]++;
        else if (ch == 'l' || ch == 'L') t[2]++;
        else if (ch == 't' || ch == 'T') t[3]++;
    }

    while (t[0] > 0 || t[1] > 0 || t[2] > 0 || t[3] > 0)
    {
        if(t[0]){t[0]--;cout << 'G';}
        if(t[1]){t[1]--;cout << 'P';}
        if(t[2]){t[2]--;cout << 'L';}
        if(t[3]){t[3]--;cout << 'T';}
    }

    return 0;
}