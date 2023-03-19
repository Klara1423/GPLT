#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cin >> score;
    if (score >= 90) cout << "gong xi ni kao le " << score << " fen!";
    else cout << "kao le " << score << " fen bie xie qi!";
    return 0;
}