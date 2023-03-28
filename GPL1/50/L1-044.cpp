#include <iostream>                                                                                                                                                                                                                                                                             
#include <string>
using namespace std;

int main()
{
    string str;
    int n = 0;
    cin >> n >> str;

    for (int i = 0; str != "End"; i++)
    {
        if (i == n)
        {
            cout << str << endl;
            i = -1;
        }
        else 
        {
            if(str == "ChuiZi") cout << "Bu" << endl;
            else if(str == "JianDao") cout << "ChuiZi" << endl;
            if(str == "Bu") cout << "JianDao" << endl;
        }
        cin >> str;
    }
    
    return 0;
}