#include <iostream>
#include <string>
using namespace std;

int func(string str)
{
    int ans = 0;
    for (int i = str.size() - 1, j = 1 ; i >= 0; i--, j *= 10)
        if (str[i] < '0' || str[i] > '9')
        {
            ans = 1e5 + 1;
            break;
        }
        else
        {
            ans += j * (int)(str[i] - '0');
        }
    return ans;
}

int main()
{
    string A, B;
    bool flag = true;
    cin >> A;
    getchar();
    getline(cin, B);
    int a = func(A), b = func(B);

    if (a <= 1000 && a >= 1) cout << A;
    else
    {
        cout << "?";
        flag = false;
    } 

    cout << " + ";

    if (b <= 1000 && b >= 1) cout << B;
    else
    {
        cout << "?";
        flag = false;
    }

    cout << " = ";

    if(flag) cout << a + b;
    else cout << "?";

    return 0;
}