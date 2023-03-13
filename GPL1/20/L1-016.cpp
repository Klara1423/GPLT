#include <iostream>
#include <string>
using namespace std;
int main()
{
    string w = "10X98765432";
    int n = 0, t[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    bool flag = true;
    cin >> n;

    while (n--)
    {
        int sum = 0;
        string str;
        cin >> str;

        for (int i = 0; i < 17; i++)
            sum += t[i] * (str[i] - '0');

        if (w[sum % 11] != str[17])
        {
            cout << str << endl;
            flag = false;
        }
    }

    if (flag == true)
        cout << "All passed";

    return 0;
}