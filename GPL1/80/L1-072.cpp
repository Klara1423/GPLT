#include <iostream>

using namespace std;

int main()
{
    int tmp = 45, x = 0, y = 0, t[3][3] = {0}, w[25] = {0, 0, 0, 0, 0, 0, 10000, 36, 720, 360, 80, 252, 108, 72, 54, 180, 72, 180, 119, 36, 306, 1080, 144, 1800, 3600};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> t[i][j];
            tmp -= t[i][j];
            if (t[i][j] == 0) x = i, y = j;
        }
    }
    t[x][y] = tmp;

    for (int i = 0; i < 3; i++)
    {
        cin >> x >> y;
        cout << t[x - 1][y - 1] << endl;
    }

    cin >> tmp;

    if (tmp == 1) tmp = t[0][0] + t[0][1] + t[0][2];
    else if (tmp == 2) tmp = t[1][0] + t[1][1] + t[1][2];
    else if (tmp == 3) tmp = t[2][0] + t[2][1] + t[2][2];
    else if (tmp == 4) tmp = t[0][0] + t[1][0] + t[2][0];
    else if (tmp == 5) tmp = t[0][1] + t[1][1] + t[2][1];
    else if (tmp == 6) tmp = t[0][2] + t[1][2] + t[2][2];
    else if (tmp == 7) tmp = t[0][0] + t[1][1] + t[2][2];
    else if (tmp == 8) tmp = t[0][2] + t[1][1] + t[2][0];

    cout << w[tmp] << endl;

    return 0;
}
/*
题目不难，就是阅读理解，我读了半天题，还理解错了
1.0要自己算出是多少
2.并不是没翻的数就不能兑奖，最后兑奖的是你选的那一列的金币的和。
3.至于前面让翻3个和题目没关系，估计是想让买彩票的人好决定最后选哪一列，还是彩票套路深
*/