#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n = 0, start = 0, max = 0;
    cin >> n;
    for (int i = 2; i < sqrt(n); i++)
    {
        int tmp = n, len = 0;
        for (int j = i;  tmp % j == 0; j++)
        {
            len++;
            tmp /= j;
        }
        
        if(max < len)
        {
            max = len;
            start = i;
        }
    }

        cout << max << endl;
        for (int i = start; i < start + max; i++)
        {
            cout << (i == start ? "" :  "*") << i;
        }


    return 0;
}