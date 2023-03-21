#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 0;
    string str;
    char ans[1000][1000] = {0};
    cin >> n;
    getchar();
    getline(cin, str);

    int len = str.size() / n;
    if (str.size() / (n * 1.0) > len)
        len++;

    for (int i = len - 1, k = 0; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (k < str.size())
                ans[j][i] = str[k++];
            else
                ans[j][i] = ' ';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < len; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}
