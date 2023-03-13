#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch = 0, k = 0;
    string nums[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

    while (cin >> ch)
    {
        if (ch == '-')
        {
            cout << "fu";
            k++;
        }
        else
        {
            cout << (k == 0 ? "" : " ") << nums[ch - '0'];
            k++;
        }
    }
    return 0;
}