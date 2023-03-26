#include <iostream>
#include <stack>
using namespace std;
const int N = 1e3 + 10;


int main()
{
    int n = 0, m = 0, k = 0;
    cin >> n >> m >> k;

    while (k--)
    {
        int a[N] = {0}, idx = 0;
        bool flag = true;
        stack<int>list;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            list.push(a[i]);

            if (a[i] == idx + 1) 
            {
                idx++;
                list.pop();
            }
            if (list.size() > m) flag = false;
//不能直接break 有问题，直接break导致后面的输入不全！！！！
            while (list.empty() == 0 && list.top() == idx + 1)
            {
                idx++;
                list.pop();
            }

        }

        if(flag == true && idx == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;
// const int N = 1e3 + 10;

// int main()
// {
//     int n = 0, m = 0, k = 0;
//     cin >> n >> m >> k;

//     while (k--)
//     {
//         int a[N] = {0}, stack[N] = {0}, idx = 0, p = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if(a[i] == idx + 1) idx++;

//             if(stack[p] == idx + 1)
//             {
//                 while (stack[p] && stack[p] == idx + 1)
//                 {
//                     idx++;
//                     stack[p] = 0;
//                     p--;
//                 }
//             }
//             else
//             {
//                 stack[p] = a[i];
//                 p++;
//             }
//         }

//         if(idx == n) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
//     return 0;
// }