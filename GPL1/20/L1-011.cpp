#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    for (int i = 0; i < str2.size(); i++)
    {
        int pos = str1.find(str2[i]);
        while (pos != -1)
        {
            str1.erase(pos, 1);
            pos = str1.find(str2[i]);
        }
    }

    cout << str1;
    return 0;
}