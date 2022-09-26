#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a=0,b=0,c=0,d=0;
    cin>>c;
    while(c--){
        cin>>a>>b;
        d=(a-100)*1.8;
        if(abs(b-d)<d*0.1)cout<<"You are wan mei!"<<endl;
        else if(b>d) cout<<"You are tai pang le!"<<endl;
        else cout<<"You are tai shou le!"<<endl;
    }
    return 0;
}