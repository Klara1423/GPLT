#include <iostream>
using namespace std;

int main()
{
    int n = 0, m = 0, score[105] = {0}, ans[105] = {0}, stu = {0};
    cin >> n >> m;
    for (int i = 0; i < m; i++) cin >> score[i];
    for (int i = 0; i < m; i++) cin >> ans[i];
    while (n--)
    {
        int x = 0;
        for (int i = 0, k = 0; i < m; i++)
        {
            cin >> k;
            if(k == ans[i]) x += score[i];
        }
        cout << x << endl;
    }
    return 0;
}