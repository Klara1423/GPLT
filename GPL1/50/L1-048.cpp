#include <iostream>
using namespace std;

int main()
{
    int Ra = 0, Ca = 0, a[110][110] = {0}, Rb = 0, Cb = 0, b[110][110] = {0}, ans[110][110] = {0};

    cin >> Ra >> Ca;
    for (int i = 0; i < Ra; i++)
        for (int j = 0; j < Ca; j++)
            cin >> a[i][j];

    cin >> Rb >> Cb;
    for (int i = 0; i < Rb; i++)
        for (int j = 0; j < Cb; j++)
            cin >> b[i][j];

    if (Ca != Rb) 
    {
        cout << "Error: " << Ca << " != " << Rb;
    }
    else
    {
        for (int i = 0; i < Ra; i++)
        {
            for (int j = 0; j < Cb; j++)
            {
                for (int k = 0; k < Ca; k++)
                    {
                        ans[i][j] += a[i][k] * b[k][j];
                    }
            }
        }

        cout << Ra << " " << Cb << endl;
        for (int i = 0; i < Ra; i++)
        {
            for (int j = 0; j < Cb; j++)
            {
                cout << (j == 0 ? "" : " ") << ans[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}