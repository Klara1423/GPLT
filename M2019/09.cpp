#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int N = 1e5 + 10;
typedef struct a
{
    int x;
    int y;
    int z;
}a;

int main()
{
    int head = 0, n = 0, list[N][2] = {0}, t[N] = {0};
    vector<a> res;
    a tmp;
    cin >> head >> n;
    while (n--)
    {
        cin >> tmp.x >> tmp.y >> tmp.z;
        t[abs(tmp.y)]++;
        
    }
    
    return 0;
}