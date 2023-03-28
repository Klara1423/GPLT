#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, ans;
    getline(cin, str);
    ans = str;
    str += " ";
    
    for (int i = 0, t = 0; i < str.size(); i++)
    {
        if (str[i] == '6')
        {
            t++;
        }
        else
        {
            if (t > 9)
            {
                ans.replace(ans.find("6666"), t, "27");
            }
            else if(t > 3)
            {
                ans.replace(ans.find("6666"), t, "9");
            }
            t = 0;
        }
    }

    cout << ans; 
    return 0;
}