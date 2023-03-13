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
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        
        if (a)
        {
            if (b == 130) cout << "wan mei! ";
            else if (b > 130) cout << "ni li hai! ";
            else cout << "duo chi yu! ";

            if (c == 27) cout << "wan mei!";
            else if (c > 27) cout << "shao chi rou!";
            else cout << "duo chi rou!";
        }
        else
        {
            if (b == 129) cout << "wan mei! ";
            else if (b > 129) cout << "ni li hai! ";
            else cout << "duo chi yu! ";

            if (c == 25) cout << "wan mei!";
            else if (c > 25) cout << "shao chi rou!";
            else cout << "duo chi rou!";
        }

        cout << endl;
    }
    return 0;
}