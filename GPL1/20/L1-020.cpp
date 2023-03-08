#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n = 0, t[100010][2]= {0};
    cin >> n;  
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int x = 0;
            cin >> x;
            if(k > 1) t[x][0]++;
        }
    }

    int m = 0, flag = 0;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x = 0;
        cin >> x;
        if(t[x][0] == 0 && t[x][1] == 0)
        {
            cout << (flag == 0 ? "" : " ");
            printf("%05d",x);
            flag++;
            t[x][1]++;
        } 
    }
    
    if(!flag) cout << "No one is handsome";
    
    return 0;
}