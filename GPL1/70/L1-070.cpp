#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0, ans = 0, idx = 0;
    string str;
    getline(cin, str);
    while (str != ".")
    {
        if (str.find("chi1 huo3 guo1") != -1)
        {
            if (!ans) ans = i + 1;
            idx++;
        }
        i++;
        getline(cin, str);
    }

    cout << i << endl;
    if (ans) cout << ans << " " << idx;
    else cout << "-_-#";

    return 0;
}