#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int func(int n)
{
    int cmp = 0;
    while (n)
    {
        cmp += n % 10;
        n /= 10;
    }
    return cmp;
} 

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        int n = 0, tmp = 0, flag = 1;
        cin >> n;
        tmp = func(n);

        for (int i = 2; i < 10; i++)
        {
            int t = n * i;
            if(func(t) != tmp)
            {
                flag = 0;
                break;
            }
        }

        if (flag) cout << tmp << endl;
        else cout << "NO" << endl;
    }
    return 0;
}