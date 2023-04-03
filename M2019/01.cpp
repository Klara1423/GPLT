#include <iostream>
using namespace std;

int main()
{
    int n = 0, m = 0, tmp = 0, t[100000][2] = {0};
    cin >> n;

    while (n--)
    {
        int k = 0;
        cin >> k;
        if (k == 1) 
            cin >> tmp;
        else
            while (k--)
            {
                cin >> tmp;
                t[tmp][0]++;
            }
    }

    bool flag = false;
    cin >> m;
    while (m--)
    {
        cin >> tmp;
        if (t[tmp][0] == 0 && t[tmp][1] == 0) 
        {
            cout <<(flag ? " " : "");
            printf("%05d",tmp);
            t[tmp][1] = 1;
            flag = true;
        }
    }

    cout << (flag ? "" : "No one is handsome");


    return 0;
}