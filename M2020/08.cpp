#include <iostream>
using namespace std;

int main()
{
    int n = 0, tmp[1001] = {0};
    double cnt = 0, time = 0; 
    cin >> n;
    for (int i = 0; i < n; )
    {
        int idx = -1, hh = 0, mm = 0;
        char ch = 0;
        scanf("%d %c %d:%d", &idx, &ch, &hh, &mm);

        if (idx == 0)
        {
            time = (cnt == 0) ? time : (time / cnt);
            printf("%.0lf %.0lf\n", cnt, time);
            cnt = 0, time = 0, i++;
            continue;
        }
        else if (ch == 'S')
        {
            int x = hh * 60 + mm + 1;
            tmp[idx] = x;
        }
        else if (tmp[idx] > 0 && ch == 'E')
        {
            int x = hh * 60 + mm + 1;
            cnt++;
            time += x - tmp[idx];
            tmp[idx] = 0;
        }

    }

    return 0;
}