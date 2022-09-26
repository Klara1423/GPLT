#include<iostream>
using namespace std;
int main(){
    int a=0,b=0,c=0,d=0;
    cin>>c;
    while(c--){
        cin>>d;
        if(d%2)a++;
        else b++;
    }
    cout<<a<<' '<<b;
    return 0;
}