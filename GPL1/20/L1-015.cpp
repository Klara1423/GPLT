#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    char ch = 0;
    cin >> n >> ch;

    for (int i = 0; i < n / 2.0; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}