#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int hh = 0, mm = 0;
    string str = "Dang";
    scanf("%d:%d", &hh, &mm);

    if (hh <= 12) 
        printf("Only %02d:%02d.  Too early to Dang.", hh, mm);
    else
    {
        for (int i = 0; i < hh -12; i++) cout << str;
        if (mm != 0) cout << str;
    }
    return 0;
}