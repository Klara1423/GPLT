#include <iostream>
using namespace std;

int main()
{
    int t = 0, tong[1005] = {0}, max = 0, ans = 0;
    cin >> t;

    while (t--)
    {
        int a = 0, b = 0, c = 0; 
        scanf("%d-%d %d", &a, &b, &c);
        tong[a] += c;
    }

    for (int i = 0; i < 1005; i++)
    {
        if(max < tong[i]) 
        {
            max = tong[i];
            ans = i;
        }
    }
    
    cout << ans << " " << max;
    return 0;
}