#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    char ch = 0;
    string str;

    cin >> n >> ch;
    getchar();
    getline(cin, str);

    int len = str.size();
    if(n <= len)
    {
        str = str.substr(len - n, n);
    }
    else
    {
        for (int i = 0; i < n - len; i++)
        {
            cout << ch;
        }
    }

    cout << str; 
    return 0;
}