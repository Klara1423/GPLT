#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string>list;
    string str;
    cin >> str;

    for (int i = 0; str != "."; i++)
    {
        list.push_back(str);
        cin >> str;
    }

    if(list.size() >= 14) cout << list[1] << " and " << list[13] <<" are inviting you to dinner...";
    else if (list.size() >= 2) cout << list[1] <<" is the only one for you...";
    else cout << "Momo... No one is for you ...";
    return 0;
}