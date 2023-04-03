#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    getchar();

    while (t--)
    {
        string str;
        getline(cin, str);
        if(str.find("ong,") != -1 && str.find("ong.") != -1)
        {
            str = str.substr(0, str.rfind(" "));
            str = str.substr(0, str.rfind(" "));
            str = str.substr(0, str.rfind(" "));
            str += " qiao ben zhong.\n";
            cout << str;
        }
        else cout << "Skipped\n";
    }
    
    return 0;
}