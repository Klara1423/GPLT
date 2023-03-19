#include <iostream>
using namespace std;

int func(int n)
{
    int ans = 0;
    while (n)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
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
            if(func(n * i) != tmp)
            {
                cout << "NO" << endl; 
                flag = 0;
                break;
            }
        }

        if(flag) cout << tmp << endl;
    }
    return 0;
}