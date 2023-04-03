#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    string ch, str;
    cin >> n >> ch;
    getchar();
    getline(cin, str);


    if (n > str.size())
    {
        for (int i = 0; i < n - str.size(); i++) cout << ch;
        cout << str;
    }
    else cout << str.substr(str.size() - n, n);

    return 0;
}