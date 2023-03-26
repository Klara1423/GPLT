#include <iostream>
using namespace std;

int main()
{
    int n = 0, t[2] = {0};
    cin >> t[1] >> n;
    for (int i = 0; i < n; i++)
    {
        if(i % 2)
        {
            t[1] = t[0] * 2;
            t[0] = 0;
        }
        else
        {
            t[0] = t[1];
            t[1] = 0;
        }
    }

    if(t[0]) cout << "1 " << t[0];
    else cout << "0 " << t[1];

    return 0;
}