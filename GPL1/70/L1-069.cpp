#include <iostream>
using namespace std;

int main()
{
    int tyre[4] = {0}, min = 0, e = 0;
    int max = 0, tmp = 0, pos = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> tyre[i];
        max = max > tyre[i] ? max : tyre[i];
    }
    
    cin >> min >> e;

    for (int i = 0; i < 4; i++)
    {
        if (tyre[i] < min || max - tyre[i] > e) 
        {
            tmp++;
            pos = i + 1;
        }
    }

    if (tmp == 0) cout << "Normal";
    else if (tmp == 1) cout<< "Warning: please check #" << pos << "!";
    else cout  << "Warning: please check all the tires!";

    return 0;
}