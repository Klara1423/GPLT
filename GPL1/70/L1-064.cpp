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
        cout << str << "\nAI: ";

        for (int i = 0; i < str.size(); i++)
            if(str[i] != 'I')
                if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;

        if (str[0] == ' ') str.erase(0, 1);
        while (str.find("  ") != -1) str.erase(str.find("  "), 1);
        while (str.find(" ?") != -1) str.erase(str.find(" ?"), 1);
        while (str.find(" '") != -1) str.erase(str.find(" '"), 1);
        while (str.find(" I ") != -1) str.replace(str.find(" I "), 3, " you ");
        while (str.find(" I,") != -1) str.replace(str.find(" I,"), 3, " you,");
        while (str.find(" me ") != -1) str.replace(str.find(" me "), 4, " you ");
        while (str.find(" me,") != -1) str.replace(str.find(" me,"), 4, " you,");
        while (str.find("can you") != -1) str.replace(str.find("can you"), 7, "I can");
        while (str.find("could you") != -1) str.replace(str.find("could you"), 9, "I could");
        while (str.find("?") != -1) str.replace(str.find("?"), 1, "!");

        cout << str << endl;
    }

    return 0;
}