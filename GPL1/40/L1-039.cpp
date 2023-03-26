#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    string str, ans[1000];
    cin >> n;
    getchar();
    getline(cin, str);

    int len = (str.size() % n == 0) ? str.size() / n : str.size() / n + 1;

    for (int j = len - 1, idx = 0; j >= 0; j--)
    {
        for (int i = 0; i < n; i++)
        {
            if(idx < str.size()) 
                ans[i][j] = str[idx++];
            else 
                ans[i][j] = ' ';
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