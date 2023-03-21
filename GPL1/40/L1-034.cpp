#include <iostream>
using namespace std;

int main()
{
    int n = 0, t[1005] = {0}, max = 0;
    cin >> n;

    while (n--)
    {
        int k = 0;
        cin >> k;

        while (k--)
        {
            int f = 0;
            cin >> f;
            t[f]++;
        }
    }

    for (int i = 1; i <= 1000; i++)//不能边读边判断，不能保证max最大
        if(t[i] >= t[max]) max = i;

    cout << max << " " << t[max]; 
    return 0;
}