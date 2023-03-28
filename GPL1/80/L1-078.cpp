#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0, m = 0;
    bool flag = true;
    cin >> n >> m;
    getchar();

    while (n--)
    {
        string str;
        getline(cin, str);

        if (str.find("qiandao") == -1 && str.find("easy") == -1) 
        {
            if (m) m--;
            else 
            {
                cout << str;
                flag = false;
            }
        }
    }

    if(flag) cout << "Wo AK le";

    return 0;
}