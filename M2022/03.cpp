#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    double a = 0.0, b = 0.0, c = 0.0, ans = 0.0;
    cin >> a >> b >> c;
    
    if(b) ans = a * 1.26;
    else ans = a * 2.455;

    if(ans > c) printf("%.2lf T_T\n", ans);
    else printf("%.2lf ^_^\n", ans);
    return 0;
}