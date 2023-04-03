#include <iostream>
using namespace std;

int main()
{
    int n = 0, in[6] = {0}, ans[6] = {0};

    for (int i = 0; i < 6; i++) 
    {
        cin >> in[i];
        ans[i] = in[i] == 6 ? 5 : 6;
    }

    cin >> n;
    n--;

    while (n--)
    {
        for (int i = 0; i < 6; i++)
        {
            ans[i]--;
            if (ans[i] == in[i]) ans[i]--;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << (i == 0 ? "" : " ") << ans[i];
    }
    
    return 0;
}