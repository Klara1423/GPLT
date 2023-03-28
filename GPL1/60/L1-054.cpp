#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch = 0;
    int n = 0, flag = 1;
    string str[105];

    cin >> ch >> n;
    getchar();
    for (int i = 0; i < n; i++) getline(cin, str[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j < n; j++)
        {
            if (str[i][j] != str[n - i - 1][n - j - 1])
            {
                flag = 0;
                break;
            }
            if (!flag) break;
        }
    }

    if(flag) cout << "bu yong dao le\n";

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << (str[i][j] == ' ' ? str[i][j] : ch);
        }
        cout << endl;
    }

    return 0;
}