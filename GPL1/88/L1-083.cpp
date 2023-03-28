#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    cin >> a >> b >> c >> d; // 禁入年龄线 陪同年龄线 询问者1的年龄 询问者2的年龄

    if (c >= a && d >= a)
    {
        cout << c << "-Y " << d << "-Y\n";
        cout << "huan ying ru guan\n";
    }
    else if (c >= b && d < a)
    {
        cout << c << "-Y " << d << "-Y\n";
        cout << "qing 1 zhao gu hao 2\n";
    }
    else if (d >= b && c < a)
    {
        cout << c << "-Y " << d << "-Y\n";
        cout << "qing 2 zhao gu hao 1\n";
    }
    else if ((c >= a && c < b) && d < a)
    {
        cout << c << "-Y " << d << "-N\n";
        cout << "1: huan ying ru guan\n";
    }
    else if ((d >= a && d < b) && c < a)
    {
        cout << c << "-N " << d << "-Y\n";
        cout << "2: huan ying ru guan\n";
    }
    else if (c < a && d < a)
    {
        cout << c << "-N " << d << "-N\n";
        cout << "zhang da zai lai ba\n";
    }

    return 0;
}
