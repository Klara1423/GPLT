#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 0, b = 0, sum = 0, len = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        sum += i, len++;
        cout << setw(5) << i;
        if(len % 5 == 0) cout << endl;
    }

    if(len % 5 != 0) cout << endl;
    cout << "Sum = " << sum;
    return 0;
}