#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    int t[10][2] = {0};
    for (int i = 0; i < 11; i++)
    {
        cin >> str[i];
        t[str[i] - '0'][0]++;
    }

    cout << "int[] arr = new int[]{";
    for(int i = 9, idx = 0; i >= 0; i--)
    {
        if(t[i][0] > 0)
        {
            cout << (idx == 0 ? "" : ",") << i;
            t[i][1] = idx;
            idx ++;
        }
    }
    cout << "};" << endl;

    cout << "int[] index = new int[]{";
    for (int i = 0; i < 11; i++)
        cout << (i == 0 ? "" : ",") << t[str[i] - '0'][1];
    cout << "};" << endl;

    return 0;
}