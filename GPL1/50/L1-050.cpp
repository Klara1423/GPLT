#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int l = 0, n = 0, tmp = 1;
    string str;
    cin >> l >> n; 

    for (int i = 0; i < l; i++) 
        tmp *= 26;
    tmp -= n;
    while (tmp)
    {
        str += char(tmp % 26 + 'a');
        tmp /= 26;
    }
    while (str.size() < l) str += 'a';

    reverse(str.begin(), str.end());

    cout << str;


    return 0;
}