#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 0, n = 0, x = 0, y = 0;
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++)
    {
        int p = 0, q = 0, m = 0, n = 0;
        cin >> p >> q >> m >> n;
        int t = p + m;

        if (q == t && n != t)
        {
            x++;
            if (x > a) 
            {
                cout << "A" << endl << y << endl; 
                return 0;
            }
        }
        else if(q != t && n == t)
        {
            y++;
            if (y > b) 
            {
                cout << "B" << endl << x << endl; 
                return 0;
            }
        } 
    }
    
    return 0;
}