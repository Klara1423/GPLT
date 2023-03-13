#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 0, len = 0, x = 0, y = 0;
    cin >> a >> b >> len;

    for (int i = 0; i < len; i++)
    {
        int A0 = 0, A1 = 0, B0 = 0, B1 = 0;
        cin >> A0 >> A1 >> B0 >> B1;
        int sum = A0 + B0;

        if (A1 == sum && B1 != sum)
        {
            x++;
            if (x > a) 
            {
                cout << "A" << endl << y << endl; 
                return 0;
            }
        }
        else if(A1 != sum && B1 == sum)
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