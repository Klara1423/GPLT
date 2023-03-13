#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        int flag = 1;
        string str;
        cin >> str;
        for (int i = 0; i < str.size() - 1; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                if(str[i + 1] != str[i] - 1 && str[i + 1] != str[i] - 32 )
                {
                    //cout << int(str[i]) << " " << int(str[i + 1]) << endl;
                    flag = 0;
                    break;
                }
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                if(str[i + 1] != str[i] + 1 && str[i + 1] != str[i] + 32 )
                {
                    //cout << int(str[i]) << " " << int(str[i + 1]) << endl;
                    flag = 0;
                    break;
                }
            }
        }
        
        if (flag) cout << "Y\n";
        else cout << "N\n";
    }
    return 0;
}