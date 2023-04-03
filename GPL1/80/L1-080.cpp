#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a = 0, b = 0, n = 0, tmp = 0;
    vector<int>ans;
    cin >> a >> b >> n;
    ans.push_back(a);
    ans.push_back(b);

    for (a = 0, b = 1; ans.size() < n; a++, b++)
    {
        tmp = ans[a] * ans[b];

        if (tmp < 10) 
        {
            ans.push_back(tmp);
        }
        else
        {
            ans.push_back(tmp / 10);
            ans.push_back(tmp % 10);
        }
    }

    for (int i = 0; i < n; i++)
        cout << (i == 0 ? "" : " ") << ans[i];

    return 0;
}