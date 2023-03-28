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
        int s = 0, h = 0, w = 0;
        cin >> s >> h >> w;
        
        if (s)
        {
            if (h == 130) cout << "wan mei! ";
            else if (h > 130) cout << "ni li hai! ";
            else cout << "duo chi yu! ";

            if (w == 27) cout << "wan mei!";
            else if (w > 27) cout << "shao chi rou!";
            else cout << "duo chi rou!";
        }
        else
        {
            if (h == 129) cout << "wan mei! ";
            else if (h > 129) cout << "ni li hai! ";
            else cout << "duo chi yu! ";

            if (w == 25) cout << "wan mei!";
            else if (w > 25) cout << "shao chi rou!";
            else cout << "duo chi rou!";
        }

        cout << endl;
    }
    return 0;
}