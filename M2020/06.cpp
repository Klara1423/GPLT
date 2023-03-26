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
        int tong[4] = {0};
        string str;
        getline(cin, str);
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] >= '0' && str[i] <= '9') tong[0]++;
            else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') tong[1]++;
            else if (str[i] == '.') tong[2]++;
            else tong[3]++;
        }
        if (str.size() < 6) cout << "Your password is tai duan le.\n";
        else if (tong[3] > 0) cout << "Your password is tai luan le.\n";
        else if (tong[0] == 0) cout << "Your password needs shu zi.\n";
        else if (tong[1] == 0) cout << "Your password needs zi mu.\n"; 
        else cout << "Your password is wan mei.\n";
    }
    return 0;
}